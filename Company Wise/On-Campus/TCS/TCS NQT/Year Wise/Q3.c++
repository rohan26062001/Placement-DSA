/*
    For hiring a car, a travel agency charges R1 rupees per hour for the first N hours and then R2 rupees per hour. Given the total time of travel in minutes is X. The task is to find the total traveling cost in rupees. Note: While converting minutes into hours, ceiling value should be considered as the total number of hours.

    For example: If the total travelling time is 90 minutes, i.e. 1.5 hours, it must be considered as 2 hours.

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int R1, N, R2, mins, hours;
    cin>>R1>>N>>R2>>mins;

    if(mins%60==0){
        hours=mins/60;
    }
    else{
        hours=mins/60+1;
    }
    cout<<"Hours: "<<hours<<endl;
    if(hours<=N){
        int cost=hours*R1;
        cout<<cost<<endl;
    }
    else{
        int cost=N*R1+(hours-N)*R2;
        cout<<cost<<endl;
    }
    return 0;
}