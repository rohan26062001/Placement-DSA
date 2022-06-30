#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(a==1)    return 1;
    if(b==0)    return 0;
    if(b%a==0)  return a;
    return gcd(b%a, a);
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    sort(v.begin(), v.end());

    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(gcd(v[i], v[j])==1)
                count++;
        }
    }
    cout<<"Total No. of Pairs: "<<count<<endl;

    return 0;
}