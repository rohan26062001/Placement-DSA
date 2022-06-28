// Problem Description -:  Given two non-negative integers n1 and n2, where n1<n2. The task is to find the total number of integers in the range [n1, n2](both inclusive) which have no repeated digits.

#include<bits/stdc++.h>

using namespace std;

int countIntegers(int n1, int n2){
    int count=0;
    for(int i=n1; i<=n2; i++){
        vector<int> v;
        set<int> s;
        int num=i, rem;
        while(num){
            rem=num%10;
            v.push_back(rem);
            s.insert(rem);
            num/=10;
        }
        if(v.size()==s.size())
            count++;
    }
    return count;
}

int main(){
    int n1, n2; cin>>n1>>n2;
    int count=countIntegers(n1, n2);
    cout<<count<<endl;
    return 0;
}