#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the Array:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++)  cin>>v[i];

    vector<int> cpy = v;
    sort(cpy.begin(), cpy.end());
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[cpy[i]]=i+1;
    }

    for(int i=0; i<n; i++){
        v[i]=mp[v[i]];
        cout<<v[i]<<" ";
    }

    return 0;
}