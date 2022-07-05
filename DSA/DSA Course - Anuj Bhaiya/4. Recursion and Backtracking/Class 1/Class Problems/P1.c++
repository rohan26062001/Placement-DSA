// Number of Ways to go from Top-Left to Bottom-Right in a mxn matrix

#include<bits/stdc++.h>

using namespace std;

int ways(int m, int n){
    if(m==1||n==1)  return 1;
    return ways(m-1,n)+ways(m, n-1);
}

int main(){
    int m, n;   cin>>m>>n;
    int noOfWays=ways(m, n);
    cout<<noOfWays<<endl;
    return 0;
}