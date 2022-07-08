#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    vector<vector<int>> ans;
    set<int> even, odd;
    for(int i=0; i<n; i++){
        if(v[i]%2==0)   even.insert(v[i]);
        else    odd.insert(v[i]);
    }
    ans[0] = {odd.begin(), odd.end()};
    ans[1] = {even.begin(), even.end()};
    return 0;
}