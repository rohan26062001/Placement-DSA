#include<bits/stdc++.h>

using namespace std;

bool areAnagrams(string str1, string str2){
    if(str1.size()!=str2.size())    return false;

    vector<int> v1(26, 0), v2(26, 0);
    for(int i=0; i<str1.size(); i++){
        v1[str1[i]-'a']++;
        v2[str2[i]-'a']++;
    }

    return v1==v2;
}

int main(){
    string str1, str2;
    cin>>str1>>str2;
    if(areAnagrams(str1, str2))
        cout<<"Anagrams"<<endl;
    else
        cout<<"Not Anagrams"<<endl;
    return 0;
}