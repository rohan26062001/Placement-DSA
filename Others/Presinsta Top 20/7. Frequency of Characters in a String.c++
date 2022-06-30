#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    map<char, int> mp;
    for(int i=0; i<str.size(); i++){
        mp[str[i]]++;
    }

    cout<<endl<<"Frequency is:"<<endl;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<"'"<<it->first<<"'"<<": "<<it->second<<endl;
    }

    return 0;
}