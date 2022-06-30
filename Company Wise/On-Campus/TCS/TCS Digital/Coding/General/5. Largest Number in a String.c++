#include<bits/stdc++.h>

using namespace std;

int findLargestNumber(string s){
    int n=s.size();
    vector<string> v;
    string str="";
    for(int i=0; i<n; i++){
        if(s[i]>='0'&&s[i]<='9'){
            while(s[i]>='0'&&s[i]<='9'){
                str+=s[i];
                i++;
            }
            v.push_back(str);
            str="";
        }
    }
    int maxm=INT_MIN;
    for(int i=0; i<v.size(); i++){
        maxm=max(maxm, stoi(v[i]));
    }

    return maxm;
}

int main(){
    string input;
    getline(cin, input);

    int number = findLargestNumber(input);
    cout<<number<<endl;

    return 0;
}