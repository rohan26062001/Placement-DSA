#include<bits/stdc++.h>

using namespace std;

int main(){
    map<char, int> mp;
    string str; cin>>str;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            mp[str[i]]++;
        }
    }

    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<"->"<<it->second<<endl;
    }
    return 0;
}