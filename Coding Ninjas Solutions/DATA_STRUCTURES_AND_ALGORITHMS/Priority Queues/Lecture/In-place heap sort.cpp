#include <iostream>

using namespace std;


#include<bits/stdc++.h>
using namespace std;
void heapSort(int arr[], int n) {
    // Write your code
    for(int i=1;i<n;i++){
        int childIndex = i;
        while (childIndex > 0)
    {
        int parentIndex = (childIndex - 1) / 2;

        if (arr[childIndex] < arr[parentIndex]) {
            swap(arr[childIndex],arr[parentIndex]);
        } 
        else
            break;
        
        childIndex = parentIndex;
    }
        
    }
    
    
    int s=n;
    
    
    while(s>1){
        
        swap(arr[0],arr[s-1]);
        
    s--;
        
        
    int parent_i = 0;
	int l_c = 2*parent_i +1;
    int r_c = 2*parent_i +2;
        
        while(l_c < s)
        {	
            
            int min_i=parent_i;
         	
            if(arr[l_c]<arr[min_i])
                min_i=l_c;
            
            if(r_c < s && arr[r_c]<arr[min_i])
                min_i=r_c;
            if(min_i  == parent_i)
                break;
            
            swap(arr[parent_i],arr[min_i]);
            
            parent_i =min_i;
            l_c = 2*parent_i +1;
        	r_c = 2*parent_i +2;
            
        
        }
        
    }
    
    
    
}



/*

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}

*/