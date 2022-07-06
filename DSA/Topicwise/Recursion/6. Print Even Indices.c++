#include<bits/stdc++.h>

using namespace std;

void PrintEvenIndices(vector<int> &v, int idx){
    if(idx>=v.size())   return;
    cout<<v[idx]<<" ";
    PrintEvenIndices(v, idx+2);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++)  cin>>v[i];
    PrintEvenIndices(v, 2);
    return 0;
}