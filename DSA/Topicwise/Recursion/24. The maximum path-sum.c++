#include<bits/stdc++.h>

using namespace std;

int maxPathSum(int i, int j, int sum, int r, int c, vector<vector<int>> &mat, vector<vector<int>> &vis){
    if(i>=r || j>=c || vis[i][j]==1)    return 0;
    
}

int main(){
    int r, c;
    cin>>r>>c;
    vector<vector<int>> mat(r, vector<int>(c));
    vector<vector<int>> vis(r, vector<int>(c, 0));
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>mat[i][j];
        }
    }

    int ans = maxPathSum(0, 0, 0, r, c, mat, vis);
    cout<<ans<<endl;
    return 0;
}