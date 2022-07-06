// You are given a function that takes an integer N. Write a program that returns the sum of all the even numbers which are less than or equal to N.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    if(n==2)    cout<<2<<endl;
    else{
        int sum=0;
        for(int i=2; i<=n; i+=2) sum+=i;
        cout<<sum<<endl;
    }

    return 0;
}