#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    if(n==1)    return n;
    return n*factorial(n-1);
}

int main(){
    int number; cin>>number;
    int cpy=number, specialForm=0;
    while(cpy){
        specialForm+=factorial(cpy%10);
        cpy/=10;
    }
    if(specialForm==number) cout<<"Special Number"<<endl;
    else    cout<<"Not a Special Number"<<endl;
    return 0;
}