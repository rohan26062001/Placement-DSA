// Problem Description -: Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.
// Note : Keep the first of the array unaltered.

#include<bits/stdc++.h>

using namespace std;

void printArray(vector<int> &v, int n){
    for(int i=0; i<n; i++)  cout<<v[i]<<",";
    cout<<endl;
}

void cyclicallyRotateByK(vector<int> &v, int n, int k){
    vector<int> copy=v;
    for(int i=0; i<n; i++){
        v[(i+k)%n]=copy[i];
    }
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int k;  cin>>k;
    
    cout<<"Before Rotating the Array is:"<<endl;
    printArray(v,n);

    cyclicallyRotateByK(v,n,k);

    cout<<"After Rotating the Array is:"<<endl;
    printArray(v,n);

    return 0;
}