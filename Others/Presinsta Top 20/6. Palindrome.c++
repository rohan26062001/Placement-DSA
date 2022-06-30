#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    int n=s.size(), i=0, j=n-1;
    while(i<j){
        if(s[i]!=s[j])  return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    if(isPalindrome(str))   cout<<"Palindrome"<<endl;
    else    cout<<"Not a Palindrome"<<endl;

    return 0;
}