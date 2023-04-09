// OPERATION 3 - Row & Col wise Sum nikal dedo

#include <bits/stdc++.h>
using namespace std;

// to print row wise sum
// void printRowSum(int arr[][4], int row, int col)
// {
//     cout<<"Printing Sum Row ->"<<" ";
//     for(int row=0; row<3; row++){
//         int sum=0;
//         for(int col=0; col<4; col++){
//             sum += arr[row][col];
//         }
//         cout<<sum<<" ";   
//     }
//     cout<<endl;
// }


// to print coloumn wise sum
void printColSum(int arr[][4], int row, int col)
{
    cout<<"Printing Sum Col ->"<<" ";
    for(int col=0; col<4; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
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

    // printRowSum(arr, 3, 4);

    printColSum(arr, 3, 4);

    return 0;
}