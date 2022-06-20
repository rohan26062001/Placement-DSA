#include<bits/stdc++.h>

using namespace std;

int SumOfNNaturalNumbers(int n){
    if(n==1)    return 1;

    return n*n+SumOfNNaturalNumbers(n-1);
}

int main(){
    int n;  cin>>n;
    cout<<SumOfNNaturalNumbers(n)<<endl;
    return 0;
}