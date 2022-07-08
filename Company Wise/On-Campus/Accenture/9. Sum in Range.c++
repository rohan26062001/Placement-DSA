#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n, sum=0;
    cin>>m>>n;
    for(int i=m; i<=n; i++){
        if(i%15==0) sum+=i;
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}