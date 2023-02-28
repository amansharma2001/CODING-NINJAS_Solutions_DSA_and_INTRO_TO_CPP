#include <iostream>
using namespace std;


#include<unordered_map>
#include<bits/stdc++.h>
void printIntersection(int arr1[], int arr2[], int n, int m) {
    unordered_map<int,int> um;
    
    
    for(int i =0;i<n;i++)
    {	
        int a=arr1[i];
        if(um.count(a)==0)
             um[a]=1;
        else{
            
            um[a]+=1;
            
        }
    }
    
    for(int i=0;i<m;i++)
    {	
        int a= arr2[i];
        if(um.count(a)>0)
        {
            int count1 = um[a];
            if(count1!=0){
                um[a]-=1;
                cout<<a<<endl;
            }
                
        }
    }
	
}




/*

int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int* arr2 = new int[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}
*/