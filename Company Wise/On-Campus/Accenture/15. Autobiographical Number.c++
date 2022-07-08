#include<bits/stdc++.h>

using namespace std;

int main(){
    string str; cin>>str;
    int numberOfZeros = str[0]-'0', count=0;
    for(int i=1; i<str.size(); i++){
        if(str[i]=='0')
            count++;
    }

    if(count==numberOfZeros){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}