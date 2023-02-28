// Problem Description:- Start Pattern

/*
Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******
The dots represent spaces.
Input Format :
    N (Total no. of rows)
Output Format :
    Pattern in N lines
Constraints :
    0 <= N <= 50
Sample Input 1 :
    3
Sample Output 1 :
   *
  ***
 *****
Sample Input 2 :
    4
Sample Output 2 :
    *
   ***
  *****
 *******
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
            cout<<"*";
            j=j+1;
        }
        int k=0;
        while (k<i){
            cout<<"*";
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
  
}




