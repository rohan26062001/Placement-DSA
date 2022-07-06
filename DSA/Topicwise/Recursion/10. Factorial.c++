#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    if(n==1)    return n;
    return n*factorial(n-1);
}

int main(){
    int n;  cin>>n;
    int fact = factorial(n);
    cout<<"Factorial: "<<fact<<endl;
    return 0;
}