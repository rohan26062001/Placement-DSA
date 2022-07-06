#include<bits/stdc++.h>

using namespace std;

void printOneToN(int n){
    if(n==0)    return;
    cout<<n<<endl;
    printOneToN(n-1);
}

int main(){
    int n;  cin>>n;
    printOneToN(n);
    return 0;
}