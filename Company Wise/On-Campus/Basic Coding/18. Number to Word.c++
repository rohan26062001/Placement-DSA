#include<bits/stdc++.h>

using namespace std;

int main(){
    int num; cin>>num;
    map<int, string> mp = {{0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}};

    vector<string> v;
    while(num){
        v.push_back(mp[num%10]);
        num/=10;
    }

    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    
    return 0;
}