#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> v(n);
    v[0]=0;
    v[1]=1;
    
    cout<<v[0]<<","<<v[1]<<",";
    for(int i=2; i<n; i++){
        v[i]=v[i-1]+v[i-2];
        cout<<v[i]<<",";
    }
    cout<<endl;

    return 0;
}