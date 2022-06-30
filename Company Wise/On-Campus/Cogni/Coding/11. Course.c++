#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of courses: ";
    cin>>n;
    if(n<=0||n>20){
        cout<<"Invalid Input"<<endl;
        return 0;
    }

    vector<string> courses;
    cout<<"Enter Courses: "<<endl;
    for(int i=0; i<n; i++){
        string item;
        cin>>item;
        courses.push_back(item);
    }

    string courseName;
    cout<<"Enter the course to be searched: ";
    cin>>courseName;

    if(find(courses.begin(), courses.end(), courseName)!=courses.end()){
        cout<<courseName<<" course is available"<<endl;
    }
    else{
        cout<<courseName<<" course is not available"<<endl;
    }

    return 0;
}