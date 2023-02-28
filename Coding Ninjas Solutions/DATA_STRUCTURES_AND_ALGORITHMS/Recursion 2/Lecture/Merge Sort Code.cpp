#include <iostream>
using namespace std;

void merge(int ans[],int s,int m, int e){
    int size1=m-s+1;
    int size2=e-m;
    
    int *arr1=new int[size1],*arr2=new int[size2];
    
    for(int i=0;i<size1;i++){
        arr1[i]=ans[s+i];
    }
    for(int j=0;j<size2;j++){
        arr2[j]=ans[m+1+j];
    }
    int i = 0, j = 0, k = s;
 
        while (i<size1 && j <size2)
    {
       
        if (arr1[i] <= arr2[j])
            ans[k++] = arr1[i++];
        else
            ans[k++] = arr2[j++];
    
    }
 
        while (i < size1){
            ans[k++] = arr1[i++];
        }
        	
 
        while (j < size2){
            ans[k++] = arr2[j++];
        }
        	
   
}
void ms(int input[],int s,int e){
    if(s>=e)
        return ;
    else{
        int m=(s+e)/2;
        ms(input,s,m);
        ms(input,m+1,e);
        merge(input,s,m,e);
    }
}
void mergeSort(int input[], int size){
	int s=0;
    int e=size-1;
    ms(input,s,e);
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}