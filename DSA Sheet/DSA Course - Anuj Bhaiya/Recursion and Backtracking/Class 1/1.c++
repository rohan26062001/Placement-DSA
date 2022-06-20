#include<bits/stdc++.h>

using namespace std;

bool isPalin(vector<int> &v, int i, int j){
    if(i>=j)    return true;

    if(v[i]!=v[j])  return false;

    return isPalin(v, i+1, j-1);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];

    if(isPalin(v, 0, n-1))
        cout<<"PALINDROME"<<endl;
    else
        cout<<"NOT PALINDROME"<<endl;

    return 0;
}