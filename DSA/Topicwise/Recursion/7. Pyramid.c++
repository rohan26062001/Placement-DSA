#include<bits/stdc++.h>

using namespace std;

void printPyramid(int col, int numberOfStars){
    if(numberOfStars>col)   return;
    
    int noOfSpaces = (col-numberOfStars)/2;
    while(noOfSpaces--) cout<<" ";
    int i=0;
    while(i<numberOfStars){
        cout<<"*";
        i++;
    }
    cout<<endl;
    printPyramid(col, numberOfStars+2);
}

int main(){
    int n;  cin>>n;
    int col = 2*n-1;
    printPyramid(col, 1);
    return 0;
}