#include<bits/stdc++.h>

using namespace std;

int log2(int n, int x){
    if(pow(2,x)==n){
        return x;
    }
    
    if(pow(2, x)>n){
        return x-1;
    }

    return log2(n, x+1);
}

int main(){
    int n;  cin>>n;
    int ans = log2(n, 0);
    cout<<ans<<endl;
    return 0;
}