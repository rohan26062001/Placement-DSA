#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(a==0)    return b;
    if(b==0)    return a;
    if(a==b)  return a;
    return gcd(b%a, a);
}

int main(){
    int a, b;
    cout<<"Enter a, b: ";
    cin>>a>>b;

    int result;
    if(a>b) result=gcd(b, a);
    else    result=gcd(a,b);

    cout<<"GCD: "<<result<<endl;

    return 0;
}