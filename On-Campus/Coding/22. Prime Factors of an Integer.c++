#include<bits/stdc++.h>

using namespace std;

bool ifPrime(int n){
    if(n==2) return 2;
    for(int i=2; i<ceil(sqrt(n)); i++){
        if(n%i==0)  return false;
    }
    return true;
}

int main(){
    int number; cin>>number;
    if(number<=1){
        cout<<"NO PRIME FACTORS"<<endl;
        return 0;
    }

    for(int i=2; i<=number; i++){
        if(number%i==0){
            if(ifPrime(i))  cout<<i<<" ";
        }
    }
    return 0;
}