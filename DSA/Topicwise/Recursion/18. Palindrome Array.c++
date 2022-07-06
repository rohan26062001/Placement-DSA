#include<bits/stdc++.h>

using namespace std;

bool PalindromeArray(vector<int> &v, int l, int r){
    if(l>=r)    return true;
    if(v[l]!=v[r])  return false;

    return PalindromeArray(v, l+1, r-1);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    if(PalindromeArray(v, 0, n-1))  cout<<"Palindrome Array"<<endl;
    else    cout<<"Not a Palindrome Array"<<endl;
    return 0;
}