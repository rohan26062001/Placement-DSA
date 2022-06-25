#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<int>> v(m, vector<int>(n));
    vector<vector<int>> tr(n, vector<int>(m));

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
            tr[j][i]=v[i][j];
        }
    }

    cout<<"Original Matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transposed Matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<tr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}