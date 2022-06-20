#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> ans;

void CombinationSum(int index, int target, vector<int> &v, vector<int> &list){
    if(index>=v.size()){
        if(target==0){
            ans.push_back(list);
            return;
        }
        return;
    }

    if(v[index]<=target){
        list.push_back(v[index]);
        CombinationSum(index, target-v[index], v, list);
        list.pop_back();
    }
    CombinationSum(index+1, target, v, list);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n), list;
    for(int i=0; i<n; i++)
        cin>>v[i];
    int target; cin>>target;
    CombinationSum(0, target, v, list);
    for (int i=0; i<ans.size(); i++){
        for (int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<",";
        }    
        cout<<endl;
    }
}