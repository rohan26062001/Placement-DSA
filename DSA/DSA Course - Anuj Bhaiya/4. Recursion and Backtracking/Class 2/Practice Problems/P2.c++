// Rope Cutting Problem - Maximize the number of Cuts after Cutting the rod into 3 different sizes

#include<bits/stdc++.h>

using namespace std;

int ropeCutting(int n, int a, int b, int c){
    if(n==0)    return 0;
    if(n<=-1)   return -1;

    int res = max(max(ropeCutting(n-a, a, b, c), ropeCutting(n-b, a, b, c)), ropeCutting(n-c, a, b, c));
    if(res==-1) return -1;
    return res+1;
}

int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int ans = ropeCutting(n, a, b, c);
    cout<<ans<<endl;
    return 0;
}