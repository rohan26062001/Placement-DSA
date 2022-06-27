#include<bits/stdc++.h>

using namespace std;

int main(){
    int z=1;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            for(int k=1; k<=3; k++){
                cout<<z++<<". "<<i<<", "<<j<<", "<<k<<endl;
            }
        }
    }
    return 0;
}