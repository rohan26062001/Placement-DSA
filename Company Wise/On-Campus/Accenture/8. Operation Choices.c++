#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, res;
    cin>>a>>b>>c;
    switch (c)
    {
    case 1:
        res = a+b;
        cout<<"Result: "<<res<<endl;
        break;
    
    case 2:
        res = a-b;
        cout<<"Result: "<<res<<endl;
        break;
    
    case 3:
        res = a*b;
        cout<<"Result: "<<res<<endl;
        break;

    case 4:
        res = a/b;
        cout<<"Result: "<<res<<endl;
        break;
    
    default:
        cout<<"Invalid Input"<<res<<endl;
        break;
    }
    return 0;
}