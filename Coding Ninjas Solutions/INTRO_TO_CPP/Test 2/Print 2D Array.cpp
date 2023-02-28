#include <iostream>

using namespace std;



void print2DArray(int **input, int row, int col) {
	int k=row;
   for(int i =0;i<row;i++){
       for(int j=k-1;j>=0;j--){
           for(int l=0;l<col;l++){
               cout<<input[i][l]<<" ";
           }
           cout<<endl;
       }
       k--;
   }
}

int main() {
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    print2DArray(input, row, col);
}
