#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of semesters: ";
    cin>>n;

    vector<int> highestMarks(n+1), numberOfSujects(n+1);
    for(int i=1; i<=n; i++){
        cout<<"Enter number of subjects in semester "<<i<<": "<<endl;
        cin>>numberOfSujects[i];
        if(numberOfSujects[i]<0){
            cout<<"Invalid Input"<<endl;
            return 0;
        }
    }
    for(int i=1; i<=n; i++){
        cout<<"Marks obtained in semester "<<i<<": "<<endl;
        int maxmMarks=INT_MIN;
        for(int j=1; j<=numberOfSujects[i]; j++){
            int mark;   cin>>mark;
            if(mark<0||mark>100){
                cout<<"Invalid Input"<<endl;
                return 0;
            }
            maxmMarks=max(maxmMarks, mark);
            highestMarks[i]=maxmMarks;
        }
    }

    for(int i=1; i<=n; i++){
        cout<<"Maximum mark in semester "<<i<<": "<<highestMarks[i]<<endl;
    }

    return 0;
}