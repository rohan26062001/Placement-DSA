#include<bits/stdc++.h>

using namespace std;

int sumArray(vector<int> &v, int idx, int sum){
    if(idx>=v.size()){
        return sum;
    }
    return sumArray(v, idx+1, sum+v[idx]);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    int sum = sumArray(v, 0, 0);
    double average = 1.0*sum/n;
    cout<<average<<endl;
    return 0;
}