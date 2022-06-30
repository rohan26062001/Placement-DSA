#include<bits/stdc++.h>

using namespace std;

bool checkPrime(int n){
    if(n==2)    return n;
    for(int i=2; i<=ceil(sqrt(n)); i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){
    int lower, upper;
    cin>>lower>>upper;

    if(lower<0||upper<0||lower>upper){
        cout<<"INVALID INPUT"<<endl;
    }
    else if(lower==upper && checkPrime(lower)){
        cout<<lower<<endl;
    }
    else{
        vector<int> primes;
        for(int i=lower; i<=upper; i++){
            if(checkPrime(i))
                primes.push_back(i);
        }

        for(int i=0; i<primes.size(); i++)
            cout<<primes[i]<<",";
        cout<<endl;
    }

    return 0;
}