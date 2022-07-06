#include<bits/stdc++.h>

using namespace std;

int SuffixSum(vector<int> &v, int idx, int m, int sum){
    if(m==0){
        return sum;
    }
    return SuffixSum(v, idx-1, m-1, sum+v[idx]);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    int m;  cin>>m;

    int sum = SuffixSum(v, n-1, m, 0);
    cout<<sum<<endl;
    return 0;
}