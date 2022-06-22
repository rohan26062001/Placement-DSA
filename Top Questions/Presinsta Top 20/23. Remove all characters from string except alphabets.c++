#include<bits/stdc++.h>

using namespace std;

int main(){
    string str; cin>>str;
    string ans="";
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A'&&str[i]<='Z')    continue;
        else    ans+=str[i];
    }
    cout<<ans<<endl;
    return 0;
}