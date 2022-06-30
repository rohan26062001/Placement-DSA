/*

    Pattern:
        1
       010
      10101
     0101010
    101010101

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int h;  cin>>h;
    int rows=h, col=2*h-1, mid=(col+1)/2-1, lower=mid, upper=mid, k=1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(j>=lower && j<=upper){
                cout<<k;
                k=1-k;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        lower--;
        upper++;
    }
    return 0;
}