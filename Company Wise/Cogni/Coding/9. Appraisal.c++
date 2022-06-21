#include<bits/stdc++.h>

using namespace std;

int main(){
    float salary, appraisal, increment;
    cout<<"Enter the salary: ";
    cin>>salary;
    if(salary<0){
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }
    cout<<"Enter the Performance appraisal rating: ";
    cin>>appraisal;

    if(appraisal>=1 && appraisal<=3){
        increment=salary*0.10;
        salary+=increment;
    }
    else if(appraisal>=3.1 && appraisal<=4){
        increment=salary*0.25;
        salary+=increment;
    }
    else if(appraisal>=4.1 && appraisal<=5){
        increment=salary*0.30;
        salary+=increment;
    }
    else{
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }
    cout<<salary<<endl;

    return 0;
}