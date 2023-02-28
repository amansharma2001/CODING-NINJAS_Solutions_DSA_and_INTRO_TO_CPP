#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    
    int i=1;
    while (i<=n){
        int spaces= 0;
        while (spaces<n-i){
            cout<<" ";
            spaces=spaces+1;
        }
        
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
}


