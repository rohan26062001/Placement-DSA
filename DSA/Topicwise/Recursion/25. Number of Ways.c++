#include<bits/stdc++.h>

using namespace std;

int NumberOfWays(int s, int e){
    if(s==e)    return 1;
    if(s>e) return 0;
    return NumberOfWays(s+1, e)+NumberOfWays(s+2, e)+NumberOfWays(s+3, e);
}

int main(){
    int S, E;   cin>>S>>E;
    cout<<NumberOfWays(S, E)<<endl;
    return 0;
}