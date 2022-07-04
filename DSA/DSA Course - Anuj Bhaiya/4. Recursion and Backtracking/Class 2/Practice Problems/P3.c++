// Josephus Problem

#include<bits/stdc++.h>

using namespace std;

int josephus(vector<int> &v, int k, int index){
    if(v.size()==1) return v[0];

    int deathIndex = (index+k)%v.size();
    v.erase(v.begin()+deathIndex);
    return josephus(v, k, deathIndex);
}

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)  v[i]=i+1;
    k--;
    int ans=josephus(v, k, 0);
    cout<<ans<<endl;
    return 0;
}