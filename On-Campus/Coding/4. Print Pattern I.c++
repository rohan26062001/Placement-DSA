#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int i, j, h, space, x = 1;

    cout<<"Enter the height: ";
    cin>>h;

    for (i = 1; i <= h; i++)
    {
        cout<<endl;
        for (space = 1; space <= (h - i); space++)
            cout<<" ";
        for (j = 1; j <= i; j++)
        {
            cout<<x;
            x = 1 - x;
        }
    }
    return 0;
}