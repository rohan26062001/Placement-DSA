#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string itemName, minimumDiscountItemName;
    float discountRate, discount, minumumDiscount=3.40282e+038, price;
    cout<<"Enter number of items: ";
    cin>>n;
    cout<<"Enter items: "<<endl;
    while(n--){
        cin>>itemName>>price>>discountRate;
        discount=price*discountRate/100.0;
        if(discount<minumumDiscount){
            minumumDiscount=discount;
            minimumDiscountItemName=itemName;
        }
    }

    cout<<minimumDiscountItemName<<endl;

    return 0;
}