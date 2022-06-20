#include<bits/stdc++.h>

using namespace std;

void PrintSubSeqSumK(vector<int> &v, int index, vector<int> &list, int sum, int k){
    if(index>=v.size()){
        if(sum==k){
            cout<<"{";
            for(int i=0; i<list.size(); i++)
                cout<<list[i]<<",";
            cout<<"}"<<endl;
            return;
        }
        else
            return;
    }
    list.push_back(v[index]);
    PrintSubSeqSumK(v, index+1, list, sum+v[index], k);
    list.pop_back();
    PrintSubSeqSumK(v, index+1, list, sum, k);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n), list;
    for(int i=0; i<n; i++)
        cin>>v[i];
    int k;  cin>>k;
    PrintSubSeqSumK(v, 0, list, 0, k);
    return 0;
}