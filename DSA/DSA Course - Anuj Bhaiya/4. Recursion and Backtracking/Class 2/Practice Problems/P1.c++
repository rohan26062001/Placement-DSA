// Print all Permutations of a given string

#include<bits/stdc++.h>

using namespace std;

void printPermutations(string s, int l, int r){
    if(l==r){
        cout<<s<<", "<<endl;
        return;
    }

    for(int i=l; i<=r; i++){
        swap(s[l], s[i]);
        printPermutations(s, l+1, r);
        swap(s[l], s[i]);
    }
}

int main(){
    string s;   cin>>s;
    cout<<"{"<<endl;
    printPermutations(s, 0, s.size()-1);
    cout<<"}"<<endl;
    return 0;
}