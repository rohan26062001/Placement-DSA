/*

    Given an array Arr[] of N integer numbers. The task is to rewrite the array by putting all multiples of 10 at the end of the given array.

    Note: The order of the numbers which are not multiples of 10 should remain unaltered, and similarly, the order of all multiples of 10 should be unaltered.

    For e.g.
    Suppose N = 9 and Arr[]={10, 12, 5, 40, 30, 7, 50, 9, 10}
    You have to push all multiple of 10 at the end of the Arr[]
    Hence, the output is 12 5 7 9 10 40 30 50 10.

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    vector<int> notMultiples, multiples;
    for(int i=0; i<n; i++){
        if(arr[i]%10==0 and arr[i]!=0){
            multiples.push_back(arr[i]);
        }
        else{
            notMultiples.push_back(arr[i]);
        }
    }

    for(int i=0; i<notMultiples.size(); i++)
        cout<<notMultiples[i]<<" ";
    for(int i=0; i<multiples.size(); i++)
        cout<<multiples[i]<<" ";

    return 0;
}