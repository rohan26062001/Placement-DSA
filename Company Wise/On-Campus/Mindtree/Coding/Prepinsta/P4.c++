// Problem Link: https://prepinsta.com/mindtree-coding-questions-and-answers/
// Problem Name: Airport Authority

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    vector<int> weights(n);
    for(int i=0; i<n; i++)  cin>>weights[i];
    int t;  cin>>t;

    int amount=0;
    for(int i=0; i<n; i++){
        if(weights[i]<=t){
            amount++;
        }
        else{
            amount+=2;
        }
    }
    cout<<"Amount: "<<amount<<endl;

    return 0;
}