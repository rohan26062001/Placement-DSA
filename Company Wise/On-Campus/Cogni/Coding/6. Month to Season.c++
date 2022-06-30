#include<bits/stdc++.h>

using namespace std;

map<int, string> mp = {{1, "Winter"}, {2, "Winter"}, {3, "Spring"}, {4, "Spring"}, {5, "Spring"}, {6, "Summer"}, {7, "Summer"}, {8, "Summer"}, {9, "Autumn"}, {10, "Autumn"}, {11, "Autumn"}, {12, "Winter"}};

int main(){
    int numberOfMonth;
    cout<<"Enter the month: ";
    cin>>numberOfMonth;

    if(numberOfMonth<0 || numberOfMonth>12){
        cout<<"INVALID MONTH"<<endl;
    }
    else{
        cout<<mp[numberOfMonth]<<endl;
    }
    return 0;
}
