#include<bits/stdc++.h>
#include<math.h>

#define PI 3.141592

using namespace std;

int main(){
    for(int x=0; x<=360; x+=15){
        double degree=x*(PI/180.0);
        double result = sin(degree);
        cout<<"Sin("<<x<<")="<<result<<endl;
    }
    return 0;
}