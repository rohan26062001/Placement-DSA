#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main(){
    string str; cin>>str;
    lli currMax=1, longestMax=1, n=str.size();
    for(lli i=1; i<n; i++){
        if(str[i]==str[i-1]){
            currMax++;
            longestMax=max(longestMax, currMax);
        }
        else
            currMax=1;
    }
    cout<<longestMax<<endl;
    return 0;
}