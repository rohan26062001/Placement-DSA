#include<bits/stdc++.h>

using namespace std;

void MaxInArray(vector<int> &v, int n){
    int maxElem=INT_MIN, maxIdx=-1;
    for(int i=0; i<n; i++){
        if(v[i]>maxElem){
            maxElem=v[i];
            maxIdx=i;
        }
    }
    cout<<"Max Elem: "<<maxElem<<", Max Index: "<<maxIdx<<endl;
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    MaxInArray(v, n);
    return 0;
}