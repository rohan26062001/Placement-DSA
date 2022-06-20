#include<bits/stdc++.h>

using namespace std;

void PrintName(string name, int n){
    if(n==0)    return;
    cout<<name<<endl;
    PrintName(name, n-1);
}

int main(){
    string name;    cin>> name;
    int n;  cin>>n;
    PrintName(name, n);

    return 0;
}