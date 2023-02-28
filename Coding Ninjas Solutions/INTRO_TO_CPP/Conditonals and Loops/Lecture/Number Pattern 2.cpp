// Problem Description:- Number Pattern 2

/*
Print the following pattern
Pattern for N = 4
   1
  23
 345
4567
The dots represent spaces.
Input Format :
    N (Total no. of rows)
Output Format :
    Pattern in N lines
Sample Input :
    5
Sample Output
    1
   23
  345
 4567
56789
The dots represent spaces.
*/


#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int i=0;
    while(i<n){
        
        int space = n-1-i;
        while (space>0){
            cout<<" ";
            space=space-1;
        }
        int j=i+1;
        while(j<=((2*i)+1))
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
  
}




