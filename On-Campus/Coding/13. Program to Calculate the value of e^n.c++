#include<bits/stdc++.h>

using namespace std;

int factorial(int num){
    if(num==0)  return 1;
    int f=1;
    for(int i=1; i<=num; i++)   f*=i;
    return f;
}

int main(){
    int n;  cin>>n;
    double e=0;
    for(int i=0; i<=n; i++)
        e+=(1.0/factorial(i));
    printf("e = %0.3f\n", e);
    return 0;
}