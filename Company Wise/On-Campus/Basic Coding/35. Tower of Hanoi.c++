#include<bits/stdc++.h>

using namespace std;

void TOH(int n, string a, string b, string c){
    if(n>=1){
        TOH(n-1, a, c, b);
        cout<<a<<" to "<<b<<endl;
        TOH(n-1, c, b, a);
    }
}

int main(){
    int n=3;
    TOH(n, "A", "B", "C");
    return 0;
}