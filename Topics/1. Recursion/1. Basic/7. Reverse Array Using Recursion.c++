#include<bits/stdc++.h>

using namespace std;

void reverse(vector<int> &v, int l, int r){
    if(l>=r)    return;
    swap(v[l], v[r]);
    reverse(v, l+1, r-1);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    reverse(v, 0, n-1);
    cout<<"Printing the array:"<<endl;
    for(int i=0; i<n; i++)
        cout<<v[i]<<", ";
    cout<<endl;
    return 0;
}