#include<bits/stdc++.h>

using namespace std;

void helper(vector<int> &v, vector<int> &ds, vector<bool> boolean, vector<vector<int>> &ans){
    if(ds.size()==v.size()){
        ans.push_back(ds);
        return;
    }

    for(int i=0; i<v.size(); i++){
        if(!boolean[i]){
            ds.push_back(v[i]);
            boolean[i]=true;
            helper(v, ds, boolean, ans);
            ds.pop_back();
            boolean[i]=false;
        }
    }
}

vector<vector<int>> generatePermutations(vector<int> &v, int n){
    vector<vector<int>> ans;
    vector<int> ds;
    vector<bool> boolean(v.size(), false);
    helper(v, ds, boolean, ans);
    return ans;
}

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    vector<vector<int>> ans=generatePermutations(v,n);
    for(int i=0; i<ans.size(); i++){
        cout<<"{";
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }

    return 0;
}