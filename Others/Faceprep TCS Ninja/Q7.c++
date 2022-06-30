/*
    Oddly Even

    Problem Description:
    Given a maximum of 100 digit numbers as input, find the difference between the sum of odd and even position digits.

    Input 1:
    4567
    Expected output: 
    2

    Explanation:
    The Sum of odd position digits 4 and 6 is 10. The Sum of even position digits 5 and 7 is 12. The difference is 12-10=2.

    Input #2: 
    9834698765123
    Expected Output:
    1

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int number;
    cin>>number;

    vector<int> num;
    while(number){
        int rem=number%10;
        num.push_back(rem);
        number/=10;
    }
    reverse(num.begin(), num.end());

    int n=num.size(), even=0, odd=0;
    for(int i=0; i<n; i++){
        if((i+1)%2==1){
            odd+=num[i];
        }
        else{
            even+=num[i];
        }
    }

    cout<<abs(odd-even)<<endl;

    return 0;
}