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