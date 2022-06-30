#include<bits/stdc++.h>

using namespace std;

int main(){
    int noOfTickets;
    cout<<"Enter the no of ticket: ";
    cin>>noOfTickets;
    char refreshments, couponCode, circle;
    cout<<"Do you want refreshment: ";
    cin>>refreshments;
    cout<<"Do you have coupon code: ";
    cin>>couponCode;
    cout<<"Enter the circle: ";
    cin>>circle;

    if(noOfTickets<5 || noOfTickets>40){
        cout<<"Minimum of 5 and Maximum of 40 Tickets"<<endl;
        return 0;
    }

    float totalCost=0, ticketCost;
    if(circle=='k')
        ticketCost=75.0*noOfTickets;
    else if(circle=='q')
        ticketCost=150.0*noOfTickets;
    else{
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }
    totalCost=ticketCost;

    if(noOfTickets>20){
        ticketCost=0.9*ticketCost;
        totalCost=ticketCost;
    }
    if(couponCode=='y'){
        ticketCost=0.98*ticketCost;
        totalCost=ticketCost;
    }
    if(refreshments=='y'){
        totalCost+=noOfTickets*50.0;
    }

    cout<<"Total Cost: "<<totalCost<<endl;

    return 0;
}