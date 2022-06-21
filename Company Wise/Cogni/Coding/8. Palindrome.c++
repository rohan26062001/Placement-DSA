#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(string str){
    int i=0, j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    string num=to_string(number);
    if(checkPalindrome(num)){
        cout<<"PALINDROME"<<endl;
    }
    else{
        cout<<"NOT A PALINDROME"<<endl;
    }

    return 0;
}