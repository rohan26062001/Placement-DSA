// Generate all Subsets/Subsequences of a String

#include<bits/stdc++.h>

using namespace std;

void generateAllPermutations(string s, int idx, string curr){
    if(idx==s.size()){
        cout<<curr<<","<<endl;
        return;
    }

    generateAllPermutations(s, idx+1, curr);
    generateAllPermutations(s, idx+1, curr+s[idx]);
}

int main(){
    string s;   cin>>s;
    cout<<"{"<<endl;
    generateAllPermutations(s, 0, "");
    cout<<"}"<<endl;
    return 0;
}