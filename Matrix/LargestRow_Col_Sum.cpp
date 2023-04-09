// OPERATION 4 - Largest Row and Coloumn wise sum

#include <bits/stdc++.h>
using namespace std;

// ROW
int LargestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum+=arr[row][col];
        }
        
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}

// Col
int LargestColSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int colIndex = -1;
    for(int col=0; col<3; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum+=arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            colIndex = col;
        }
    }
    cout<<"The maximum col sum is "<<maxi<<endl;
    return colIndex;
}


int main()
{
    int arr[3][3];
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    int ansRowIndex = LargestRowSum(arr, 3, 3);
    cout<<"Max row is at index "<<ansRowIndex<<endl;

    cout<<endl;

    int ansColIndex = LargestColSum(arr, 3, 3);
    cout<<"Max col is at index "<<ansColIndex<<endl;

    return 0;
}
