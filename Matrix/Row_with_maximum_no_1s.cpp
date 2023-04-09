#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m)
{

// ROW - iska mtlb hai ki konse row mein mera maximum number of row find ho rha hai, number of row lakhne k liye 

	int ROW = -1;
	    
	int row=0, col=m-1;
	    
	while((row<n) && (col>=0))
	{
	    if(arr[row][col] == 1){
            ROW = row;
	        col--;
	    }
	    if(arr[row][col] == 0){
	        row++;
	    }
	}
	return ROW;
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> arr(n,vector<int>(m));
    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            cin>>arr[row][col];
        }
    }
    auto ans = rowWithMax1s(arr, n, m);
    cout<<ans<<" \n";

    return 0;
}