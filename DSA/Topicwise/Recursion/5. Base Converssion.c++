#include<bits/stdc++.h>

using namespace std;

int BaseConversion(int n){
    if(n==0)    return 0;
    int newNumber = n%2;
    int fwdNumber = BaseConversion(n/2);
    return fwdNumber*10+newNumber;
}

int main(){
    int n; cin>>n;
    int newNumber = BaseConversion(n);
    cout<<"New Number: "<<newNumber<<endl;
    return 0;
}