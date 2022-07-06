#include<bits/stdc++.h>

using namespace std;

int ThreeNPlus1(int n, int len){
    if(n==1)    return len;
    if(n%2==0)  return ThreeNPlus1(n/2, len+1);
    else    return ThreeNPlus1(3*n+1, len+1);
}

int main(){
    int n;  cin>>n;
    int len = ThreeNPlus1(n, 1);
    cout<<len<<endl;
    return 0;
}