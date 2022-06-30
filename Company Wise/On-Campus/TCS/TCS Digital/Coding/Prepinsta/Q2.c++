#include<bits/stdc++.h>

using namespace std;

int main(){
    double loan, time;
    cin>>loan>>time;

    double n1; cin>>n1;
    double bankA=0;
    while(n1--){
        double period, interestRate;
        cin>>period>>interestRate;
        double sq = pow((1 + interestRate), period * 12);
        double emi = (loan * interestRate)/(1 - 1/sq);
        bankA+=emi;
    }

    double n2; cin>>n2;
    double bankB=0;
    while(n2--){
        double period, interestRate;
        cin>>period>>interestRate;
        double sq = pow((1 + interestRate), period * 12);
        double emi = (loan * interestRate)/(1 - 1/sq);
        bankB+=emi;
    }

    if(bankA<bankB){
        cout<<"Bank A"<<endl;
    }
    else{
        cout<<"Bank B"<<endl;
    }

    return 0;
}