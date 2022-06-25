#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,k,z=0;
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            for(k=1;k<=3;k++){
                printf("%02d. %d %d %d\n", z++, i, j, k);
            }
        }
    }
    return 0;
}