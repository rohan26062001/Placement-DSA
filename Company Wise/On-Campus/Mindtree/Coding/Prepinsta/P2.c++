// Problem Link: https://prepinsta.com/mindtree-coding-questions-and-answers/
// Problem Name: Parallel Columbus

#include<bits/stdc++.h>

using namespace std;

long long int factorial(int n){
    if(n==1)    return 1;
    return n*factorial(n-1);
}

int main(){
    int m, n, x, y;
    cin>>m>>n>>x>>y;

    long long int p = factorial(m+n)/(factorial(m)*factorial(n));
    long long int q = (factorial(x+y)/(factorial(x)*factorial(y)))*(factorial(n-x+m-y)/(factorial(n-x)*factorial(m-y)));
    int ans = p-q;
    cout<<ans<<endl;

    return 0;
}