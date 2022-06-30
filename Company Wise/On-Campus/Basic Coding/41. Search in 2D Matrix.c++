#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"Enter the element for Row["<<i+1<<"] and Col["<<j+1<<"] :"<<endl;
            cin>>v[i][j];
        }
    }

    cout<<"Enter the element to search: ";
    int elem;   cin>>elem;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i][j]==elem){
                cout<<"Element is at Row["<<i+1<<"] and Col["<<j+1<<"]."<<endl;
                return 0;
            }
        }
    }


    cout<<"Element is not found"<<endl;
    return 0;
}