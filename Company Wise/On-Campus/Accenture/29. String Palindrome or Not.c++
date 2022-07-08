#include<bits/stdc++.h>

using namespace std;

bool isPalin(string str){
    int l=0, r=str.size()-1;
    while(l<r){
        if(str[l]!=str[r])  return false;
        l++;
        r--;
    }
    return true;
}

int main(){
    string str;
    cin>>str;
    if(isPalin(str))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}