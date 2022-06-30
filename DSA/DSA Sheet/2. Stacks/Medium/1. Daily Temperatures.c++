#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
        cin >> temp[i];

    // Processing
    vector<int> ans(n, 0);
    stack<pair<int, int>> st;
    vector<pair<int, int>> v;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top().first <= temp[i])
            st.pop();
        if (st.empty())
            v.push_back({-1, i});
        else
            v.push_back(st.top());
        st.push({temp[i], i});
    }
    reverse(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i].first == -1)
            continue;
        else
        {
            ans[i] = v[i].second - i;
        }
    }

    // Print
    for(int i=0; i<n; i++){
        cout<<ans[i]<<",";
    }

    return 0;
}