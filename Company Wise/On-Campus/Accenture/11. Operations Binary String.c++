#include<bits/stdc++.h>

using namespace std;

int OperationsBinaryString(string str){
    if(str.size()==0)   return -1;
    
    int result;
    if(str[0]=='I') result=1;
    else    result=0;

    for(int i=1; i<str.size(); i+=2){
        if(str[i]=='C')
            result = result^(str[i+1] - '0');
        if(str[i]=='B')
            result = result||(str[i+1] - '0');
        if(str[i]=='A')
            result = result&&(str[i+1] - '0');
    }

    return result;
}

int main(){
    string str; cin>>str;
    int result = OperationsBinaryString(str);
    cout<<"Result: "<<result<<endl;
    return 0;
}