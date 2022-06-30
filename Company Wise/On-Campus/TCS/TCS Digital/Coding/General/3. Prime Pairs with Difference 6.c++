#include<bits/stdc++.h>

using namespace std;

vector<bool> primes(2001, false);

bool checkPrime(int n){
    if(n<=1)    return false;
    int max_div = floor(sqrt(n));
    for(int i=2 ;i<=max_div; i++){
        if(n%i==0)  return false;
    }
    return true;
}

int countPrimePairs(int n1, int n2){
    for(int i=n1; i<=n2; i++){
        if(checkPrime(i))
            primes[i]=true;
    }

    int count=0;
    for(int i=n1; i<=n2-6; i++){
        if(primes[i]){
            if(primes[i+6])
                count++;
        }
    }
    return count;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;

    int res = countPrimePairs(n1, n2);
    cout<<res<<endl;

    return 0;
}