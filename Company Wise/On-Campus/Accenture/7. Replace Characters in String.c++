#include<bits/stdc++.h>

using namespace std;

void replaceString(string &str, char ch1, char ch2){
    int i=0, n=str.size();
    while(i<n){
        if(str[i]==ch1){
            str[i]=ch2;
            i++;
            continue;
        }
        if(str[i]==ch2){
            str[i]=ch1;
            i++;
            continue;
        }
        i++;
    }
}

int main(){
    string str;
    char ch1, ch2;
    cin>>str>>ch1>>ch2;
    replaceString(str, ch1, ch2);
    cout<<"New String: "<<str<<endl;
    return 0;
}