#include<bits/stdc++.h>

using namespace std;

int main(){
    int number; cin>>number;
    int cpy=number, rev=0;
    while(cpy){
        rev*=10;
        rev+=cpy%10;
        cpy/=10;
    }
    
    if(number==rev) cout<<"PALINDROME"<<endl;
    else    cout<<"NOT A PALINDROME"<<endl;

    return 0;
}