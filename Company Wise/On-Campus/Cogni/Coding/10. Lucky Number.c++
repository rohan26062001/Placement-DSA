#include<bits/stdc++.h>

using namespace std;

int main(){
    int number;
    cout<<"Enter the car no.: ";
    cin>>number;

    if(number<1000 || number>9999){
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }

    int sum=0;
    while(number){
        int remainder=number%10;
        sum+=remainder;
        number/=10;
    }
    if(sum%3==0 || sum%5==0 || sum%7==0){
        cout<<"Lucky Number"<<endl;
    }
    else{
        cout<<"Sorry its not my lucky number"<<endl;
    }

    return 0;
}