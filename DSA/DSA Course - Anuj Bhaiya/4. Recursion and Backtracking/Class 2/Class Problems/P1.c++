// Find the sum of digits of a number using recursion

#include<bits/stdc++.h>

using namespace std;

int sumOfDigitsUsingRecursion(int n){
    if(n<10)    return n;

    return (n%10)+sumOfDigitsUsingRecursion(n/10);
}

int main(){
    int n;  cin>>n;
    int ans=sumOfDigitsUsingRecursion(n);
    cout<<ans<<endl;

    return 0;
}