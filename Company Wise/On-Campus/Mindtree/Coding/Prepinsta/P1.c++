// Problem Link: https://prepinsta.com/mindtree-coding-questions-and-answers/
// Problem Name: Self Sufficient

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;  cin>>n;
    vector<int> EarnArray(n), CostArray(n);
    for(int i=0; i<n; i++)  cin>>EarnArray[i];
    for(int i=0; i<n; i++)  cin>>CostArray[i];

    int addition=0, deduction=0;
    for(int i=0; i<n; i++){
        if(EarnArray[i]>CostArray[i]){
            deduction+=(EarnArray[i]-CostArray[i]);
        }
        else if(EarnArray[i]<CostArray[i]){
            addition+=(CostArray[i]-EarnArray[i]);
        }
    }
    if(addition>deduction){
        int minBorrow=addition-deduction;
        cout<<"Borrow from Parents: "<<minBorrow<<endl;
    }
    else{
        cout<<"No need to borrow from parents"<<endl; 
    }

    return 0;
}