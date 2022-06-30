#include<bits/stdc++.h>

using namespace std;

int main(){
    float litres, distance;   cin>>litres>>distance;

    if(litres<=0||distance<=0){
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }

    float litresPer100KM=(litres/distance)*100, milesPerGallons=((150*0.6214)/(20*0.2642));
    cout<<litresPer100KM<<" "<<milesPerGallons<<endl; 

    return 0;
}