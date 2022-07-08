#include<bits/stdc++.h>

using namespace std;

int Productsmallpair(vector<int> &v, int n, int sum){
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    for(int i=0; i<n; i++){
        smallest=min(smallest, v[i]);
    }
    for(int i=0; i<n; i++){
        if(v[i]!=smallest)
            secondSmallest=min(secondSmallest, v[i]);
    }

    if(smallest+secondSmallest>sum) return 0;

    return smallest*secondSmallest;
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);   for(int i=0; i<n; i++)  cin>>v[i];
    int sum;    cin>>sum;
    int result = Productsmallpair(v, n, sum);
    cout<<"Result: "<<result<<endl;
    return 0;
}