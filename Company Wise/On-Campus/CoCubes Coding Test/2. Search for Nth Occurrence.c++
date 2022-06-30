// Given an array, number to search (say e1), and occurrence (say n), print the index of the nth occurrence of e1 in the array. If e1 does not occur n times, then print the index as -1.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    int elem, f;
    cin>>elem>>f;

    for(int i=0; i<n; i++){
        if(v[i]==elem && f==1){
            cout<<"Index: "<<i<<endl;
            return 0;
        }
        if(v[i]==elem){
            --f;
        }
    }

    cout<<"Index: "<<-1<<endl;
    return 0;
}