#include<bits/stdc++.h>

using namespace std;

bool cnd1(string str){
    return str.size()>=4;
}

bool cnd2(string str){
    int digits = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]>='0' && str[i]<='1')
            digits++;
    }

    return digits>0;
}

bool cnd3(string str){
    int capitals = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z')
            capitals++;
    }

    return capitals>0;
}

bool cnd4(string str){
    int spacesOrOblicks = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]==' ' || str[i] == '/')
            spacesOrOblicks++;
    }

    return spacesOrOblicks==0;
}

bool cnd5(string str){
    if(str[0]>='1' && str[0]<='9')  return false;
    return true;
}

int main(){
    string str;
    cin>>str;
    if(cnd1(str) && cnd2(str) && cnd3(str) && cnd4(str) && cnd5(str)){
        cout<<"VALID"<<endl;
    }
    else{
        cout<<"NOT VALID"<<endl;
    }
    return 0;
}