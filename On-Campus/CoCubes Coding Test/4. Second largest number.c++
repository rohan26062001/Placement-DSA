#include<bits/stdc++.h>
#include<climits>

using namespace std;

int main(){
    int n, maxElem=INT_MIN, secondMax=INT_MIN;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        maxElem=max(maxElem, v[i]);
    }

    for(int i=0; i<n; i++){
        if(v[i]!=maxElem){
            secondMax=max(secondMax, v[i]);
        }
    }

    cout<<"Second Max: "<<secondMax<<endl;
    return 0;
}