#include<bits/stdc++.h>

using namespace std;

bool ReachValue(int n, int x){
    if(x==n)    return true;
    if(x>n) return false;

    return ReachValue(n, x*10)||ReachValue(n, x*20)||ReachValue(n, x*200);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;  cin>>n;
        if(ReachValue(n, 1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}