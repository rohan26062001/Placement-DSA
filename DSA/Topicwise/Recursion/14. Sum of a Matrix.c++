#include<bits/stdc++.h>

using namespace std;

void SumOfMatrices(vector<vector<int>> &A, vector<vector<int>> &B, vector<vector<int>> &C, int i, int j, int r, int c){
    if(i>=r || j>=c || C[i][j]!=-1) return;

    C[i][j]=A[i][j]+B[i][j];
    SumOfMatrices(A, B, C, i+1, j, r, c);
    SumOfMatrices(A, B, C, i, j+1, r, c);
}

int main(){
    int r, c;
    cin>>r>>c;
    vector<vector<int>> A(r, vector<int>(c)), B(r, vector<int>(c)), C(r, vector<int>(c, -1));
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>B[i][j];
        }
    }

    SumOfMatrices(A, B, C, 0, 0, r, c);
    
    cout<<"Sum:"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}