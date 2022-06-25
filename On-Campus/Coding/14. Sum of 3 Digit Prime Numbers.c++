#include<bits/stdc++.h>

using namespace std;

bool ifPrime(int n){
    for(int i=2; i<ceil(sqrt(n)); i++){
        if(n%i==0)  return false;
    }
    return true;
}

int main(){
    int sum=0;
    for(int i=100; i<=999; i++){
        if(ifPrime(i))
            sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}