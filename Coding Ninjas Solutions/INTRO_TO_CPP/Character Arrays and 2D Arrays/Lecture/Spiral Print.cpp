#include <iostream>
using namespace std;

void spiralPrint(int **input, int n, int l)
{
    int k=0;
    int m=0;
    int i;
    
    while(k<n && m<l)
    {
        for(i=m;i<l;i++){
            cout<<input[k][i]<<" ";
        }
        k++;
        
        for(i=k;i<n;i++){
            cout<<input[i][l-1]<<" ";
        }
        l--;
        
       if(k<n){
           for(i=l-1;i>=m;i--){
               cout<<input[n-1][i]<<" ";
           }
           n--;
       }
       if(m<l){
           for(i=n-1;i>=k;i--){
               cout<<input[i][m]<<" ";
           }
           m++;
       }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}