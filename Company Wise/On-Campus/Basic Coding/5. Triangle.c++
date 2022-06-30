#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;    cin>>a>>b>>c;
    if(a+b>c||b+c>a||c+a>b){
        if(a==b&&b==c)  cout<<"ALL SIDES EQUAL"<<endl;
        else if((a==b&&b!=c)||(b==c&&c!=a)||(c==a&&b!=a))    cout<<"TWO SIDES EQUAL"<<endl;
        else if(a!=b&&b!=c)  cout<<"NO SIDES EQUAL"<<endl;
    }
    else{
        cout<<"INVALID TRIANGLE"<<endl;
    }
    return 0;
}