#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    if(n==1)    return n;
    return n*factorial(n-1);
}

int main(){
    int n, r;  cin>>n>>r;
    int numerator = factorial(n), denominator = factorial(r)*factorial(n-r);
    int ncr = numerator/denominator;
    cout<<ncr<<endl;
    return 0;
}