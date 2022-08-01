#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target){
    int row = matrix.size(), col = matrix[0].size();
    int r = 0, c = col - 1;
    while (r < row && c >= 0){
        if (matrix[r][c] == target)
            return true;
        else if (matrix[r][c] > target)
            c--;
        else
            r++;
    }

    return false;
}

int main(){
    int t;  cin>>t;
    while(t--){
        cout<<"Enter Row and Column Number: ";
        int row, col;   cin>>row>>col;
        vector<vector<int>> matrix(row, vector<int>(col));
        cout<<"Enter the matrix properly: "<<endl;
        for(int i=0; i<row; i++){
            cout<<"Enter the elements for Row "<<i+1<<": "<<endl;
            for(int j=0; j<col; j++)    cin>>matrix[i][j];
        }
	cout<<"Enter the element to search: "<<endl;
	int target;	cin>>target;
	if(searchMatrix(matrix, target))	cout<<"Element Found"<<endl;
	else	cout<<"Element Not Found"<<endl;
    }
    return 0;
}