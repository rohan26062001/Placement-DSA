#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    double D=b*b-4*a*c;
    if(D<0){
        double x1,y1,x2,y2;
        x1=-b/(2*a);
        x2=x1;
        y1=sqrt(abs(D))/(2*a);
        y2=-y1;

        string root1=to_string(x1)+"+i"+to_string(y1), root2=to_string(x2)+"+i"+to_string(y2);
        cout<<"Root1="<<root1<<", Root2="<<root2;
    }
    else if(D>0){
        double root1=(-b+sqrt(D))/(2*a), root2=(-b-sqrt(D))/(2*a);
        cout<<"Root1="<<root1<<", Root2="<<root2;
    }
    else{
        double root=-b/(2*a);
        cout<<"Root1="<<root<<", Root2="<<root;
    }

    return 0;
}