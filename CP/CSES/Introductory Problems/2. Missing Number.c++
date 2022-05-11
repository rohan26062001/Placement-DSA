#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main(){
    lli n;  cin>>n;
    lli totalSum=n*(n+1)/2, sum=0;
    vector<lli> arr(n-1);
    for(lli i=0; i<n-1; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<totalSum-sum<<endl;
    return 0;
}