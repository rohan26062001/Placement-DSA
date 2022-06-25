#include<bits/stdc++.h>

using namespace std;

bool ifPrime(int n){
    for(int i=2; i<ceil(sqrt(n)); i++){
        if(n%i==0)  return false;
    }
    return true;
}

int main(){
    int n;  cin>>n;
    if(ifPrime(n))  cout<<"PRIME"<<endl;
    else    cout<<"NOT PRIME"<<endl;

    return 0;
}