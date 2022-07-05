// Write a program to calculate the number of vowels present in the string

#include<bits/stdc++.h>

using namespace std;

int main(){
    string str; cin>>str;
    int n=str.size(), count=0;
    for(int i=0; i<n; i++){
        if((str[i]=='A'||str[i]=='a')||(str[i]=='E'||str[i]=='e')||(str[i]=='I'||str[i]=='i')||(str[i]=='O'||str[i]=='o')||(str[i]=='U'||str[i]=='u'))
        count++;
    }
    cout<<count<<endl;
    return 0;
}