#include<bits/stdc++.h>

using namespace std;

int main(){
    int num1, num2;
    cin>>num1>>num2;
    int tempcarry = 0, carry = 0;
    while(num1 || num2){
        int rem1 = num1%10, rem2 = num2%10;
        if((rem1+rem2+tempcarry)>9){
            carry+=((rem1+rem2+tempcarry)%10+1);
            tempcarry=((rem1+rem2+tempcarry)%10+1);
        }
        num1/=10;
        num2/=10;
    }
    cout<<"Carry: "<<carry<<endl;
    return 0;
}