#include<bits/stdc++.h>

using namespace std;

void PrintSubSeq(vector<int> &v, int index, vector<int> &list){
    if(index>=v.size()){
        cout<<"{";
        for(int i=0; i<list.size(); i++)
            cout<<list[i]<<",";
        cout<<"}"<<endl;
        return;
    }
    list.push_back(v[index]);
    PrintSubSeq(v, index+1, list);
    list.pop_back();
    PrintSubSeq(v, index+1, list);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n), list;
    for(int i=0; i<n; i++)
        cin>>v[i];
    PrintSubSeq(v, 0, list);
    return 0;
}