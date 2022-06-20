#include<bits/stdc++.h>

using namespace std;

// Parameterized Way
// int SumOfN(int i, int n){
//     if(i==n)    return n;
//     return i+SumOfN(i+1, n);
// }

// Functional Way
int SumOfN(int n){
    if(n==0)    return n;
    return n+SumOfN(n-1);
}

int main(){
    int n;  cin>>n;
    int res = SumOfN(n);
    cout<<res<<endl;
    return 0;
}