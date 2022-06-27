#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n;   cin>>m>>n;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    int elem;   cin>>elem;

    int r=0, c=n-1;
    while(r<m && c>=0){
        if(v[r][c]==elem){
            cout<<"Item found at ["<<r+1<<" ,"<<c+1<<"]"<<endl;
            return 0;
        }
        else if(v[r][c]>elem){
            c--;
        }
        else{
            r++;
        }
    }

    cout<<"Item not found"<<endl;
    return 0;
}