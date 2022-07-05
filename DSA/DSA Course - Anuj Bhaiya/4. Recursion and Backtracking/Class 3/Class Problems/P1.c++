// Rat in a Maze Problem

#include<bits/stdc++.h>

using namespace std;

void RatInAMaze(int i, int j, int n, vector<vector<int>> &maze, vector<vector<int>> &visited, string path, vector<string> &ans){
    if(i==n-1 && j==n-1){
        ans.push_back(path);
        return;
    }

    // Downward
    if(i+1<n && maze[i+1][j]!=0 && visited[i+1][j]!=1){
        visited[i][j]=1;
        RatInAMaze(i+1, j, n, maze, visited, path+"D", ans);
        visited[i][j]=0;
    }

    // Leftward
    if(j-1>=0 && maze[i][j-1]!=0 && visited[i][j-1]!=1){
        visited[i][j]=1;
        RatInAMaze(i, j-1, n, maze, visited, path+"L", ans);
        visited[i][j]=0;
    }

    // Rightward
    if(j+1<n && maze[i][j+1]!=0 && visited[i][j+1]!=1){
        visited[i][j]=1;
        RatInAMaze(i, j+1, n, maze, visited, path+"R", ans);
        visited[i][j]=0;
    }

    // Upward
    if(i-1>=0 && maze[i-1][j]!=0 && visited[i-1][j]!=1){
        visited[i][j]=1;
        RatInAMaze(i-1, j, n, maze, visited, path+"U", ans);
        visited[i][j]=0;
    }
}

int main(){
    int n;  cin>>n;
    vector<vector<int>> maze(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>maze[i][j];
        }
    }

    vector<string> ans;
    if(maze[0][0]==1){
        vector<vector<int>> visited(n, vector<int>(n, 0));
        RatInAMaze(0, 0, n, maze, visited, "", ans);
        for(string str: ans)
            cout<<str<<" ";
        cout<<endl;
    }
    else{
        cout<<"Can't Start"<<endl;
    }

    return 0;
}