#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    
    int i=0;
    while (i<n){
        int j=n-i;
        while (j<=n){
            char ch = 'A'+j-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
  
}


