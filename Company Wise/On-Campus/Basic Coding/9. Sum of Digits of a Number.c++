#include<bits/stdc++.h>

using namespace std;

int main(){
    int num; cin>>num;
    int sum=0;
    while(num){
        sum+=(num%10);
        num/=10;
    }
    cout<<sum<<endl;
    return 0;
}