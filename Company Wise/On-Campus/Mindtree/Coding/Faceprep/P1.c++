// Write a program to find the average of the first P multiples of an integer N.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, p;   cin>>n>>p;
    double avg = (p+1)/2;
    double AVG=avg*n;
    cout<<AVG<<endl;
    return 0;
}