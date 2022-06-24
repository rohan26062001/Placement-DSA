#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    int MaxElem=INT_MIN, item;
    for(int i=0; i<n; ++i){
        cin>>item;
        MaxElem=max(MaxElem, item);
    }
    cout<<MaxElem<<endl;
    return 0;
}

// Link: https://takeuforward.org/data-structure/find-the-largest-element-in-an-array/