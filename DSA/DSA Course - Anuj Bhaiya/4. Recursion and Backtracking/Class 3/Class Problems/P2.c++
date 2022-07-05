// N Queens Problem

#include<bits/stdc++.h>

using namespace std;

bool isSafe(int row, int col, vector<string> &board, int n){
    int duprow=row, dupcol=col;
    while(row>=0 && col>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        row--;
        col--;
    }

    row=duprow, col=dupcol;
    while(col>=0){
        if(board[row][col]=='Q')    return false;
        col--;
    }

    row=duprow, col=dupcol;
    while(row<n && col>=0){
        if(board[row][col]=='Q')    return false;
        row++;
        col--;
    }
    return true;
}

void helper(int col, int n, vector<string> &board, vector<vector<string>> &ans){
    if(col==n){
        ans.push_back(board);
        return;
    }

    for(int row=0; row<n; row++){
        if(isSafe(row, col, board, n)){
            board[row][col]='Q';
            helper(col+1, n, board, ans);
            board[row][col]='.';
        }
    }
}

int main(){
    int n;  cin>>n;
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for(int i=0; i<n; i++)  board[i]=s;

    int col=0;
    helper(col, n, board, ans);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<endl;
        }
        cout<<endl<<endl;
    }
}