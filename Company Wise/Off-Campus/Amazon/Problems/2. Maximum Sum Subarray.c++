// This is also known as Kadane's Algorithm

#include<bits/stdc++.h>

using namespace std;

int maxSumSubArr(vector<int> &v){
    int n = v.size();
    int maxSoFar = INT_MIN, maxCurrent = 0;
    for(int i=0; i<n; i++){
        maxCurrent += v[i];
        if(maxCurrent>maxSoFar){
            maxSoFar = max(maxSoFar, maxCurrent);
        }
        if(maxCurrent<0){
            maxCurrent=0;
        }
    }
    return maxSoFar;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)  cin>>v[i];
        int ans = maxSumSubArr(v);
        cout<<ans<<endl;
    }
}