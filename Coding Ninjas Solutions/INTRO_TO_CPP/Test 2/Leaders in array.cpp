#include<iostream>
#include<climits>
using namespace std;

void Leaders(int* arr,int len)
{
	int i=0,j,k=1;
    while(i<len){
        j=i+1;
        while(j<len){
            if(arr[i]<arr[j]){
                k=0;
                break;
            }
            j++;
        }
        if(k==1){
            cout<<arr[i]<<" ";
        }
        else
            k=1;
        i++;
    }
}


int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
