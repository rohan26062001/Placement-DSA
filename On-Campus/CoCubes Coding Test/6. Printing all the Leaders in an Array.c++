#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    vector<int> arr(n);
    arr[n-1]=v[n-1];
    for(int i=n-2; i>=0; i--)   arr[i]=max(arr[i+1], v[i]);

    for(int i=0; i<n; i++){
        if(arr[i]==v[i])
            cout<<arr[i]<<" ";
    }
    return 0;
}