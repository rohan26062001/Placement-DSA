#include<bits/stdc++.h>

using namespace std;

void printDigits(int n){
    if(n==0){
        cout<<endl;
        return;
    }
    printDigits(n/10);
    cout<<n%10<<" ";
}

int main(){
    int n;  cin>>n;
    printDigits(n);
    return 0;
}