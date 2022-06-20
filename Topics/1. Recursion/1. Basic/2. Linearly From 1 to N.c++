#include<bits/stdc++.h>

using namespace std;

void Print(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    Print(i+1, n);
}

int main(){
    int n;  cin>>n;
    Print(1, n);

    return 0;
}