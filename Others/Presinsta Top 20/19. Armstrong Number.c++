#include<bits/stdc++.h>

using namespace std;

int ArmStrongForm(int n){
    int armstrong=0, temp=n, len=0;
    while(temp){
        len++;
        temp/=10;
    }
    while(n){
        armstrong+=pow(n%10, len);
        n/=10;
    }
    return armstrong;
}

int main(){
    int n;  cin>>n;
    if(n==ArmStrongForm(n)) cout<<"Armstrong Number"<<endl;
    else    cout<<"Not an Armstrong Number"<<endl;
    return 0;
}