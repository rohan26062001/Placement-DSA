#include<bits/stdc++.h>

using namespace std;

int main(){
    int m1, n1, m2, n2;
    cout<<"Enter the size of the first matrix: ";
    cin>>m1>>n1;
    cout<<"Enter the size of the second matrix: ";
    cin>>m2>>n2;
    vector<int, vector<int>> M1(m1, vector<int>(n1));
    vector<int, vector<int>> M2(m2, vector<int>(n2));

    cout<<"Enter the first matrix (Row-wise):";
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            cin>>M1[i][j];
        }
    }
    cout<<"Enter the second matrix (Row-wise):";
    for(int i=0; i<m2; i++){
        for(int j=0; j<n2; j++){
            cin>>M2[i][j];
        }
    }

    if(m1!=m2 || n1!=n2){
        cout<<"Invalid Matrix"<<endl;
        return 0;
    }

    vector<int, vector<int>> M(m1, vector<int>(n1));
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            M[i][j]=M1[i][j]+M2[i][j];
        }
    }

    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}