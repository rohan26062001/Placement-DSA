#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isStraightLinePossible(vector<pair<int, int> > arr, int n)
{
    int x0 = arr[0].first;
    int y0 = arr[0].second;
    int x1 = arr[1].first;
    int y1 = arr[1].second;
 
    int dx = x1 - x0, dy = y1 - y0;
    for (int i = 0; i < n; i++) {
        int x = arr[i].first, y = arr[i].second;
        if (dx * (y - y1) != dy * (x - x1)){
            cout << "0";
            return false;
        }
    }
    cout << "1x-1y=0";
    return true;
}

int main()
{

    vector<pair<int, int>> arr;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a;
        cin >> b;
        arr.push_back({a, b});
    }
        
    isStraightLinePossible(arr, n);
    return 0;
}