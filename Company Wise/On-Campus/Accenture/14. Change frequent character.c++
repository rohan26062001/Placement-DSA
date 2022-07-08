#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    char ch, target;
    cin>>str>>ch;

    map<char, int> mp;
    for(int i=0; i<str.size(); i++){
        mp[str[i]]++;
    }

    int freq = 0;
    for(auto it = mp.begin(); it!=mp.end(); it++){
        if(it->second>freq){
            target=it->first;
            freq=it->second;
        }
    }

    for(int i=0; i<str.size(); i++){
        if(str[i]==target){
            str[i]=ch;
        }
    }

    cout<<"New String: "<<str<<endl;

    return 0;
}