#include<bits/stdc++.h>

using namespace std;

int LargeSmallSum(vector<int> v, int n){
    vector<int> even, odd;
    for(int i=0; i<n; i++){
        if((i+1)%2==0)  even.push_back(v[i]);
        else    odd.push_back(v[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    return even[even.size()-2]+odd[odd.size()-2];
}

int main(){
    int n;  cin>>n;
    vector<int> v(n+1);
    for(int i=0; i<n; i++)  cin>>v[i];
    int res = LargeSmallSum(v, n);
    cout<<"Result: "<<res<<endl;
    return 0;
}