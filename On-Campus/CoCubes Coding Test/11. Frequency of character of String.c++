/*

    Make a function which accepts a string as an argument that may contain repetitive characters. Implement the function to modify and return the input string, such that each character once, along with the count of consecutive occurrence. Do not append count if the character occurs only once.

    Note – 

    The string will only contain lowercase English Alphabets
    If you have to manipulate the input string in place you cant use another string
    Assumption – 

    No character will occur consecutively more than 9 times.

    Example – 

    Input – aaaaabbbccccccccdaa

    Output – a4b3c8da2

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    string str; cin>>str;
    string ans="";
    int f=1;

    for(int i=1; i<str.size(); i++){
        if(str[i]==str[i-1]){
            f++;
            if(i==str.size()-1) ans=ans+str[i]+to_string(f);
        }else{
            if(f!=1)   ans=ans+str[i-1]+to_string(f);
            else    ans=ans+str[i-1];
            f=1;
        }
    }
    cout<<ans<<endl;

    return 0;
}