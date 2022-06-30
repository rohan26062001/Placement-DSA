#include<bits/stdc++.h>

using namespace std;

int main(){
    int number; cin>>number;
    string str="";
    while(number){
        int rem=number%2;
        str+=to_string(rem);
        number/=2;
    }
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
}