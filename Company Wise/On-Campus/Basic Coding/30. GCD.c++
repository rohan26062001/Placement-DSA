#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(a==b)    return a;
    if(a==1)    return 1;
    if(b%a==0)  return a;
    return gcd(b%a, a);
}

int main(){
    int a, b;
    cin>>a>>b;
    if(a>b){
        cout<<gcd(b, a)<<endl;
    }
    else{
        cout<<gcd(a, b)<<endl;
    }
    return 0;
}