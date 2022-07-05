// Check if a number can be expressed as sum of semi-primes

#include<bits/stdc++.h>

using namespace std;

vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19};
set<int> semiPrimes;

int main(){
    for(int i=0; i<primes.size()-1; i++){
        for(int j=i+1; j<primes.size(); j++){
            semiPrimes.insert(primes[i]*primes[j]);
        }
    }

    int n;  cin>>n;
    for(auto it=semiPrimes.begin(); it!=semiPrimes.end(); it++){
        if(semiPrimes.find(n-*it)!=semiPrimes.end()){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}