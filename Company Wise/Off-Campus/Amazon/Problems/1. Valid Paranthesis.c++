#include <bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    stack<int> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return false;
            char top = st.top();
            if ((s[i] == ')' && top != '(') || (s[i] == '}' && top != '{') || (s[i] == ']' && top != '['))
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isValid(s))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}