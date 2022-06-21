#include<bits/stdc++.h>

using namespace std;

int main(){
    int number;
    cout<<"Enter the numner: ";
    cin>>number;

    if(number==0){
        cout<<"Zero Factors"<<endl;
        return 0;
    }
    else{
        number=abs(number);
        for(int i=1; i<=number; i++){
            if(number%i==0){
                cout<<i<<",";
            }
        }
    }

    return 0;
}