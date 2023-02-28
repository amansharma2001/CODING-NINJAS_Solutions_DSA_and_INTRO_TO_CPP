#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    int sum =0;
    int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    int j=0;
    while(j<n){
        sum+=arr[j];
        j++;
    }
    cout<<sum;
}

