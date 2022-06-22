#include<bits/stdc++.h>

using namespace std;

int reverseNumber(int number){
    int reversed=0;
    while(number){
        reversed*=10;
        reversed+=(number%10);
        number/=10;
    }
    return reversed;
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++)  cin>>v[i];

    int reuslt=INT_MIN;
    for(int i=0; i<n; i++){
        if(v[i]==reverseNumber(v[i])){
            reuslt=max(reuslt, v[i]);
        }
    }

    cout<<reuslt<<endl;

    return 0;
}