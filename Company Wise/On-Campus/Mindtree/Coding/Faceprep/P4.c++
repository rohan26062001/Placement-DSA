// You are given an integer array containing the IDs of a product. Write a program to calculate the number of repetitions of the given ID in the array and return the count.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    int elem;   cin>>elem;

    int count=0;
    for(int i=0; i<n; i++){
        if(v[i]==elem)  count++;
    }
    cout<<count<<endl;
    
    return 0;
}