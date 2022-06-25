#include<bits/stdc++.h>

using namespace std;

int sumOfDigits(int num){
    int sum=0;
    while(num){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main(){
    int num;    cin>>num;
    while(num>10){
        num=sumOfDigits(num);
    }
    cout<<num<<endl;
    return 0;
}