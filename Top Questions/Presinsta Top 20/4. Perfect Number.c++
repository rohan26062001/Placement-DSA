// Theory: In number theory, a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    int num=0;
    for(int i=1; i<number; i++){
        if(number%i==0) num+=i;
    }

    if(num==number) cout<<"Perfect Number"<<endl;
    else    cout<<"Not a Perfect Number"<<endl;

    return 0;
}