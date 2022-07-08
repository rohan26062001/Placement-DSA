#include<bits/stdc++.h>

using namespace std;

int diffOfSum(int n, int m){
    int sumOfDivByM = 0, sumOfNotDivByM = 0;
    for(int i=1; i<=n; i++){
        if(i%m) sumOfNotDivByM+=i;
        else    sumOfDivByM+=i;
    }

    return abs(sumOfDivByM - sumOfNotDivByM);
}

int main(){
    int n, m;   cin>>m>>n;
    int res = diffOfSum(n, m);
    cout<<"Result: "<<res<<endl;
    return 0;
}