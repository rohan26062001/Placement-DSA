/*
    Word is the key

    One programming language has the following keywords that cannot be used as identifiers: break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var

    Write a program to find if the given word is a keyword or not

    Input #1:
    defer
    Output:
    defer is a keyword

    Input #2:
    While
    Output:
    while is a keyword

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> keywords={"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var", "while"};

    string str;
    cin>>str;

    if(find(keywords.begin(), keywords.end(), str)!=keywords.end()){
        cout<<str<<" is a keyword"<<endl;
    }
    else{
        cout<<str<<" is not a keyword"<<endl;
    }

}