#include<bits/stdc++.h>

using namespace std;

int main(){
    int r;  cin>>r;
    for(int x=-r; x<=r; x++){
        for(int y=-r; y<=r; y++){
            if(x*x+y*y==r*r){
                cout<<"("<<x<<", "<<y<<")"<<endl;
            }
        }
    }
    return 0;
}