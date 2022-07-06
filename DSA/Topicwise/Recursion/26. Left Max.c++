#include<bits/stdc++.h>

using namespace std;

void LeftMax(vector<int> &v, int idx, int maxElem){
    if(idx==v.size())   return;
    cout<<max(v[idx], maxElem)<<" ";
    LeftMax(v, idx+1, max(v[idx], maxElem));
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];

    LeftMax(v, 0, v[0]);

    return 0;
}