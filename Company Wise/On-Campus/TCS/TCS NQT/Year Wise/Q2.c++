// Given an array Arr[N] of N integers and a positive integer K. The task is to divide the array into two sub-arrays from right after the Kth position and slide the left sub-array of K elements to the end.

#include<bits/stdc++.h>

using namespace std;

void RotateByOne(vector<int> &v, int n){
    int temp=v[0];
    for(int i=1; i<n; i++){
        v[i-1]=v[i];
    }
    v[n-1]=temp;
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    int k;  cin>>k;

    while(k--){
        RotateByOne(v, n);
    }

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    return 0;
}