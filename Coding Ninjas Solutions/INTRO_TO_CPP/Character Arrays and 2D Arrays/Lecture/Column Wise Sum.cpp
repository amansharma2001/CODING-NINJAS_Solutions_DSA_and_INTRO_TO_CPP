#include<iostream>
using namespace std;


int main(){

	int a[1000][1000];
    int sum = 0;
    int m,n;
    cin>>m>>n;
    
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            cin>>a[i][j];
        }
    }
   
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            sum+=a[j][i];
        }
        cout<<sum<<" ";
        sum=0;
    }
  
}


