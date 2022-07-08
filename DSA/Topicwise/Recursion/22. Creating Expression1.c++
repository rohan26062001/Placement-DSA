#include<bits/stdc++.h>

using namespace std;

void CreateExpression(int idx, int curr, int n, vector<int> &v, int elem, bool res){
    if(idx == n){
        if(curr==elem)  res = true;
        return;
    }

    CreateExpression(idx+1, curr+v[idx-1], n, v, elem, res);
    CreateExpression(idx+1, curr-v[idx-1], n, v, elem, res);
}

int main(){
    int n, elem;    cin>>n>>elem;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    bool res = false;
    CreateExpression(1, v[0], n, v, elem, res);
    if(res) cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;

    return 0;
}