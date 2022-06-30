#include<bits/stdc++.h>

using namespace std;

int main(){
    int CSE, ECE, MECH;
    cout<<"Enter the no of students placed in CSE: ";
    cin>>CSE;
    cout<<"Enter the no of students placed in ECE: ";
    cin>>ECE;
    cout<<"Enter the no of students placed in MECH: ";
    cin>>MECH;

    if(CSE<0||ECE<0||MECH<0){
        cout<<"Invalid Input"<<endl;
    }
    else if(CSE==ECE && ECE==MECH && CSE!=0){
        cout<<"HIGHEST PLACEMENT: "<<endl;
        cout<<"CSE\nECE\nMECH"<<endl;
    }
    else if(CSE==ECE && ECE==MECH && CSE==0){
        cout<<"NONE OF THE STUDENTS GOT PLACED"<<endl;
    }
    else if(CSE==ECE && ECE>MECH){
        cout<<"HIGHEST PLACEMENT: "<<endl;
        cout<<"CSE\nECE"<<endl;
    }
    else if(ECE==MECH && MECH>CSE){
        cout<<"HIGHEST PLACEMENT: "<<endl;
        cout<<"ECE\nMECH"<<endl;
    }
    else if(MECH==CSE && CSE>ECE){
        cout<<"HIGHEST PLACEMENT: "<<endl;
        cout<<"CSE\nMECH"<<endl;
    }
    else if(CSE>ECE && CSE>MECH){
        cout<<"HIGHEST PLACEMENT: "<<endl;
        cout<<"CSE"<<endl;
    }
    else if(ECE>CSE && ECE>MECH){
        cout<<"HIGHEST PLACEMENT: "<<endl;
        cout<<"ECE"<<endl;
    }
    else if(MECH>CSE && MECH>ECE){
        cout<<"HIGHEST PLACEMENT: "<<endl;
        cout<<"MECH"<<endl;
    }

    return 0;
}