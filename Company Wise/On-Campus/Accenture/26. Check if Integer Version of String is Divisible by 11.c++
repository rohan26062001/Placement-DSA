#include<bits/stdc++.h>

using namespace std;

bool checkModulo11(string str){
    int n = str.size(), oddPos = 0, evenPos = 0;
    for(int i=0; i<n; i++){
        if((i+1)%2==0){
            evenPos+=(str[i]-'0');
        }
        else{
            oddPos+=(str[i]-'0');
        }
    }
    return abs(evenPos-oddPos)%11==0;
}

int main(){
    string str; cin>>str;
    if(checkModulo11(str))  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}