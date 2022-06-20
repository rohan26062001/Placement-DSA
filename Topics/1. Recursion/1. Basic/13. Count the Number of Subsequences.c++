#include<bits/stdc++.h>

using namespace std;

int PrintSubSeqSumK(vector<int> &v, int index, vector<int> &list, int sum, int k){
    if(index>=v.size()){
        if(sum==k)
            return 1;
        else
            return 0;
    }
    list.push_back(v[index]);
    int l = PrintSubSeqSumK(v, index+1, list, sum+v[index], k);
    list.pop_back();
    int r = PrintSubSeqSumK(v, index+1, list, sum, k);
    return l+r;
}

int main(){
    int n;  cin>>n;
    vector<int> v(n), list;
    for(int i=0; i<n; i++)
        cin>>v[i];
    int k;  cin>>k;
    int res = PrintSubSeqSumK(v, 0, list, 0, k);
    cout<<res<<endl;
    return 0;
}