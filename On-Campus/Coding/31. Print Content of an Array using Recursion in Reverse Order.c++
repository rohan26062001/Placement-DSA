#include<bits/stdc++.h>

using namespace std; 

void printArray(vector<int> &v, int idx, int n){
    if(idx>=n)  return;
    printArray(v, idx+1, n);
    cout<<v[idx]<<" ";
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];

    printArray(v, 0, n);

    return 0;
}