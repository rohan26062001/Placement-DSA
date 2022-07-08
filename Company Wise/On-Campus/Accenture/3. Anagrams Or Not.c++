#include<bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string p){
    if(s.size()!=p.size())    return false;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(p.begin(), p.end(), p.begin(), ::tolower);
    vector<int> S(26, 0), P(26, 0);
    for(int i=0; i<s.size(); i++){
        S[s[i]-'a']++;
        P[p[i]-'a']++;
    }

    return S==P;
}

int main(){
    string s, p;
    cin>>s>>p;
    if(isAnagram(s, p)) cout<<"Anagram"<<endl;
    else    cout<<"Not an Anagram"<<endl;
    return 0;
}