#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    map<char, int> mp;
    int n=str.size();
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }

    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second==1)   cout<<it->first<<",";
    }
    cout<<endl;

    return 0;
}