#include<bits/stdc++.h>

using namespace std;

int main(){
    // Input
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0 ;i<n; i++)  cin>>v[i];

    // Processing
    vector<int> ngr(n);
    stack<int> st;
    for(int i=2*n-1; i>=0; i--){
        while(!st.empty() && st.top()<=v[i%n])
            st.pop();
        if(st.empty())
            ngr[i]=-1;
        else
            ngr[i]=st.top();
        st.push(v[i]);
    }

    // Output
    for(int i=0; i<n; i++)
        cout<<ngr[i]<<" ";

    return 0;
}