#include<bits/stdc++.h>

using namespace std;

map<int, string> mp = {{1, "0"}, {2, "1"}, {3, "2"}, {4, "3"}, {5, "4"}, {6, "5"}, {7, "6"}, {8, "7"}, {9, "8"}, {10, "9"}, {11, "A"}, {12, "B"}, {13, "C"}, {14, "D"}, {15, "E"}, {16, "F"}, {17, "G"}, {18, "H"}, {19, "I"}, {20, "J"}, {21, "K"}, {22, "L"}, {23, "M"}, {24, "N"}, {25, "O"}, {26, "P"}, {27, "Q"}, {28, "R"}, {29, "S"}, {30, "T"}, {31, "U"}, {32, "V"}, {33, "W"}, {34, "X"}, {35, "Y"}, {36, "Z"}};

int main(){
    int N, num;
    cin>>N>>num;
    string str = "";
    while(num){
        int rem = num%N;
        cout<<rem<<" "<<mp[rem+1]<<endl;
        str = mp[rem+1] + str;
        num/=N;
    }
    cout<<"Result: "<<str<<endl;
    return 0;
}