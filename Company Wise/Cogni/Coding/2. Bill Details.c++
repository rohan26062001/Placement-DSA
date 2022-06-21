#include<bits/stdc++.h>

using namespace std;

int main(){
    int pizzaCost=100, puffsCost=20, colddrinkCost=10;
    int noOfPizzas, noOfPuffs, noOfColddrinks;
    cout<<"Enter the number of Pizzas: ";
    cin>>noOfPizzas;
    cout<<"Enter the number of Puffs: ";
    cin>>noOfPuffs;
    cout<<"Enter the number of Cold Drinks: ";
    cin>>noOfColddrinks;

    cout<<endl;
    int totalPizzaCost=pizzaCost*noOfPizzas, totalPuffsCost=puffsCost*noOfPuffs, totalColddrinkCost=colddrinkCost*noOfColddrinks;
    cout<<"Bill Details:"<<endl;
    cout<<"Number of Pizzas: "<<noOfPizzas<<", Total: "<<totalPizzaCost<<endl;
    cout<<"Number of Puffs: "<<noOfPuffs<<", Total: "<<totalPuffsCost<<endl;
    cout<<"Number of Cold Drinks: "<<noOfColddrinks<<", Total: "<<totalColddrinkCost<<endl;
    cout<<"TOTAL: "<<totalPizzaCost+totalPuffsCost+totalColddrinkCost<<endl;
    cout<<"ENJOY THE SHOW!!!"<<endl;

    return 0;
}