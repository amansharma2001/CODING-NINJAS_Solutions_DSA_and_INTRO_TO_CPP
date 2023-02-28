#include<iostream>
using namespace std;


int partition(int A[],int p,int r){
    
    int x = A[r];
    int i = p - 1;
 
    for (int j = p; j <= r- 1; j++)
    {
        if (A[j] <= x)
        {
            i++;
            std::swap (A[i], A[j]);
        }
    }
    std::swap (A[i + 1], A[r]);
    return (i + 1);
    
}
void qs(int input[],int si,int ei){
    
    if(si>=ei)
        return;
    else{
        int pi=partition(input,si,ei);
        qs(input,si,pi-1);
        qs(input,pi+1,ei);
    }
}
void quickSort(int input[], int size) {
	int si=0;
    int ei=size-1;
    qs(input,si,ei);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


