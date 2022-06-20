#include<bits/stdc++.h>

using namespace std;

bool Palindrome(string str, int l, int r){
    if(l>=r)    return true;
    if(str[l]!=str[r])  return false;
    Palindrome(str, l+1, r-1);
}

int main(){
    string str; cin>>str;
    if(Palindrome(str, 0, str.length()-1))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not a Palindrome"<<endl;
    return 0;
}