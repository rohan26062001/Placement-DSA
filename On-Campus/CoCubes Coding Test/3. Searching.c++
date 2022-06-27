#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    int elem;   cin>>elem;

    for(int i=0; i<n; i++){
        if(v[i]==elem){
            cout<<"FOUND"<<endl;
            return 0;
        }
    }

    cout<<"NOT FOUND"<<endl;
    return 0;
}