#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    int MinElem=INT_MAX, item;
    for(int i=0; i<n; ++i){
        cin>>item;
        MinElem=min(MinElem, item);
    }
    cout<<MinElem<<endl;
    return 0;
}

// Link: https://takeuforward.org/data-structure/find-the-smallest-element-in-an-array/