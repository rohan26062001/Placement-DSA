#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++)  cin>>v[i];
    int k;
    cout<<"Enter K: ";
    cin>>k;

    vector<int> cpy = v;
    for(int i=0; i<n; i++){
        v[(i+k)%n]=cpy[i];
    }

    for(int i=0; i<n; i++)  cout<<v[i]<<",";

    return 0;
}