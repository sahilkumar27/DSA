#include <bits/stdc++.h>
using namespace std;

   vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        //ye no of rows dega
        int row = matrix.size();

        // column ko nikalne k liye ksi bhi ek rows ka size nikal lena
        int col = matrix[0].size();

        int count = 0;

    // agar ksi k aandar n rows or m column hai, too total no of elements kitne present ho sakte hai(n*m)
        int total = row*col;

        // index intialisatoin
        int StartingRow = 0;
        int StartingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while(count < total)
        {
            // Printing Starting Row (SC - EC (Starting Column - Ending Column))
            for(int index = StartingCol; count < total && index <= endingCol; index++){
                ans.push_back(matrix[StartingRow][index]);
                count++;
            }
            StartingRow++;

            // Printing Ending Column (SR - ER)
            for(int index = StartingRow; count < total && index <= endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;        //5 ko bhi lelega or fir baad mein print kr dega print krr denge 
            
            // Printing Ending Row (EC - SC)
            for(int index = endingCol; count < total && index >= StartingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            // Printing Starting Column (ER - SR)
            for(int index = endingRow; count < total && index >= StartingRow; index--){
                ans.push_back(matrix[index][StartingCol]);
                count++;
            }
            StartingCol++;
        }

        return ans;
    }
// count++ humhe jab bhi koi element add krna ho yeah print krna ho too hum uska count ko badha denge

// NOTE: hrr for loop k aandar (count < total) yeh condition likhege, kyuki ek aisaa case bhi ho sakta hai ki count hum check hi nhi kr rhe hai or loop hum chaleye ja rhe hai, ja bhi count++ kr rhe hai too count total se aage nhi nikal jaye

int main()
{

    return 0;
}
