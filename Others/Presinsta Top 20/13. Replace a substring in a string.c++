#include<bits/stdc++.h>

using namespace std;

int main(){
    string str1, str2, str3, ansString;
    cout<<"Enter the main string: ";
    cin>> str1;
    cout<<"Enter the substring to replace: ";
    cin>>str2;
    cout<<"Enter the substring with which I have to replace: ";
    cin>>str3;

    int n=str2.size();
    for(int i=0; i<=str1.size()-n; i++){
        if(str1.substr(i,n)==str2){
            ansString=str1.substr(0,i)+str3+str1.substr(i+n, str1.size());
            break;
        }
    }
    cout<<ansString<<endl;

    return 0;
}