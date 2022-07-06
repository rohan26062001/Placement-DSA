#include<bits/stdc++.h>

using namespace std;

int summation(vector<int> &v, int idx, int sum){
    if(idx>=v.size()){
        return sum;
    }

    return summation(v, idx+1, sum+v[idx]);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];

    int sum = summation(v, 0, 0);
    cout<<sum<<endl;
    return 0;
}