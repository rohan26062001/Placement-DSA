#include<bits/stdc++.h>

using namespace std;

int main(){
    string binary;  cin>>binary;
    int decimal=0;
    int k=0;

    for(int i=binary.size()-1; i>=0; i--){
        decimal+=(binary[i]-'0')*pow(2, k++);
    }

    cout<<decimal<<endl;
    return 0;
}