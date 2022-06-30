/*

    1
    0 1
    0 1 0
    1 0 1 0
    1 0 1 0 1

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int h;  cin>>h;
    int rows=h, col=h, k;
    for(int i=0; i<rows; i++){
        if((i+1)%2==1)  k=1;
        else    k=0;
        for(int j=0; j<=i; j++){
            cout<<k;
            k=1-k;
        }
        cout<<endl;
    }
    return 0;
}