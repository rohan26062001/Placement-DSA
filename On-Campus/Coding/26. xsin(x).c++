#include<bits/stdc++.h>
#include<math.h>

#define PI 3.141592

using namespace std;

int main(){
    int x;  cin>>x;
    double degree=x*(PI/180.0);
    double result = x*sin(degree);
    cout<<result<<endl;
    return 0;
}