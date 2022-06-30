#include<bits/stdc++.h>

using namespace std;

int main(){
    cout<<"Enter N: ";
    int n;  cin>>n;
    vector<int> v(n);
    cout<<"Enter elements in sorted order: ";
    for(int i=0; i<n; i++)  cin>>v[i];
    cout<<"Enter element to search: ";
    int elem;   cin>>elem;

    int l=0, r=n-1, mid;
    while(l<r){
        mid=(l+r)/2;
        if(v[mid]==elem){
            cout<<"Element found at "<<mid<<"-th index."<<endl;
            return 0;
        }
        else if(v[mid]>elem)    r=mid-1;
        else    l=mid+1; 
    }

    cout<<"Element not found"<<endl;
    return 0;
}