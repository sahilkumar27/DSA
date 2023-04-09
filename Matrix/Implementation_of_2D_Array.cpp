// OPERATION 1 - Creating 2D array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // create 2D array
    int arr[3][4];          //3*4 = 12

    // taking input
    for(int i=0; i<3; i++){             //row
        for(int j=0; j<4; j++){         //col
            cin>>arr[i][j];
        }
    }

    // print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }

    return 0;
}