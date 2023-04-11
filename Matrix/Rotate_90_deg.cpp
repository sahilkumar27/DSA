// LeetCode 48. Rotate Image

#include <bits/stdc++.h>
using namespace std;
void Rotate_90_deg(vector<vector<int>>& matrix)
{
    for(int row=0; row < matrix.size(); row++){
        for(int col=0; col < row; col++){
            swap(matrix[row][col], matrix[col][row]);
        }
    }

    for(int row=0; row < matrix.size(); row++){
        reverse(matrix[row].begin(), matrix[row].end());
    }
}

int main()
{
    int n, m;
    cout << "Enter the size of row and column ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int row = 0; row < n; row++){
        for (int col = 0; col < m; col++){
            cin >> matrix[row][col];
        }
    }
    Rotate_90_deg(matrix);

    cout << "Printing the answer \n";
    for (int row = 0; row < matrix.size(); row++){
        for(int col=0; col<matrix.size(); col++){
            cout<<matrix[row][col]<<" ";
        }
    }

    return 0;
}