/*
    Sweet Seventeen

    Given a maximum of four digit to the base 17(10 -> A, 11 -> B, 12 -> C, 16 -> G) as input, output its decimal value.
    Input:
    23GF
    Output:
    10980
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    string hexNum;
    cin>>hexNum;

    long long int number=0;
    reverse(hexNum.begin(), hexNum.end());
    cout<<hexNum<<endl;
    for(int i=0; i<hexNum.size(); i++){
        if(hexNum[i]=='A'){
            cout<<10*pow(17,i)<<endl;
            number+=10*pow(17,i);
        }
        else if(hexNum[i]=='B'){
            cout<<11*pow(17,i)<<endl;
            number+=11*pow(17,i);
        }
        else if(hexNum[i]=='C'){
            cout<<12*pow(17,i)<<endl;
            number+=12*pow(17,i);
        }
        else if(hexNum[i]=='D'){
            cout<<13*pow(17,i)<<endl;
            number+=13*pow(17,i);
        }
        else if(hexNum[i]=='E'){
            cout<<14*pow(17,i)<<endl;
            number+=14*pow(17,i);
        }
        else if(hexNum[i]=='F'){
            cout<<15*pow(17,i)<<endl;
            number+=15*pow(17,i);
        }
        else if(hexNum[i]=='G'){
            cout<<16*pow(17,i)<<endl;
            number+=16*pow(17,i);
        }
        else{
            cout<<(hexNum[i]-'0')*pow(17, i)<<endl;
            number+=(hexNum[i]-'0')*pow(17, i);
        }
    }

    cout<<number<<endl;
    return 0;
}