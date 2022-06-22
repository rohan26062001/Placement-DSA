#include<bits/stdc++.h>

using namespace std;

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    if(year%100==0){
        if(year%400==0){
            cout<<"LEAP YEAR"<<endl;
        }
        else{
            cout<<"NOT LEAP YEAR"<<endl;
        }
    }
    else if(year%4==0){
        cout<<"LEAP YEAR"<<endl;
    }
    else{
        cout<<"NOT A LEAP YEAR"<<endl;
    }

    return 0;
}