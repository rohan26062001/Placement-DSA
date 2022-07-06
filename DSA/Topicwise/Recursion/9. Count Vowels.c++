#include<bits/stdc++.h>

using namespace std;

void PrintVowels(string s, int idx){
    if(idx>=s.size())   return;
    if((s[idx]=='a'||s[idx]=='e'||s[idx]=='i'||s[idx]=='o'||s[idx]=='u')||(s[idx]=='A'||s[idx]=='E'||s[idx]=='I'||s[idx]=='O'||s[idx]=='U')) cout<<s[idx]<<" ";
    PrintVowels(s, idx+1);
}

int main(){
    string s;
    getline(cin, s);
    PrintVowels(s, 0);
    return 0;
}