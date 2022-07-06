#include<bits/stdc++.h>

using namespace std;

void PrintMaximum(vector<int> &v, int idx, int end, int maxElem){
    if(idx==end){
        cout<<maxElem<<endl;
        return;
    }
    PrintMaximum(v, idx+1, end, max(maxElem, v[idx]));
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    PrintMaximum(v, 1, n-1, v[0]);
    return 0; 
}