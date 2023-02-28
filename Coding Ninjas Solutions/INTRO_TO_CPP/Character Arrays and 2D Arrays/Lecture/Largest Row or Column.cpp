#include <iostream>
using namespace std;

void findLargest(int **input, int row, int col)
{
    int row_sum=0;
    int col_sum=0;
    int row_ind;
    int col_ind;
    
    
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=input[i][j];
        }
        if(sum>row_sum){
            row_sum=sum;
            row_ind=i;
        }
    }
    
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=input[j][i];
        }
        if(sum>col_sum){
            col_sum=sum;
            col_ind=i;
        }
    }
    if(row==0 && col==0 ){
        cout<<"row"<<" "<<0<<" "<<-2147483648;
    }
    
    else if(row_sum<col_sum){
        cout<<"column"<<" "<<col_ind<<" "<<col_sum;
    }
    else
        cout<<"row"<<" "<<row_ind<<" "<<row_sum;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}