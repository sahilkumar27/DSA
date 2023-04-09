// OPERATION 2 - Searching the 2D array means we have to take TARGET

#include <bits/stdc++.h>
using namespace std;

// Searching(Target) function
bool isPresent(int arr[][4], int target, int row, int col)
{
    for(row=0; row<3; row++){
        for(col=0; col<4; col++){

            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }

        cout<<endl;
    }

    cout<<"Enter the element to search "<<endl;
    int target;
    cin>>target;
    
    // calling function
    if(isPresent(arr, target, 3, 4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}

// TC - O(row ✖ col)
// Square matrix = O(n)2