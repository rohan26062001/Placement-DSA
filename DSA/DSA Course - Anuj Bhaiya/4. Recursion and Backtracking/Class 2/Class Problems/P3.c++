// Tower of Hanoi Problem

#include<bits/stdc++.h>

using namespace std;

void TOH(int n, string A, string B, string C){
    if(n>=1){
        TOH(n-1, A, C, B);
        cout<<A<<" to "<<B<<endl;
        TOH(n-1, C, B, A);
    }
}

int main(){
    int n;  cin>>n;
    string A="a", B="b", C="c";
    TOH(n, A, B, C);
    return 0;
}