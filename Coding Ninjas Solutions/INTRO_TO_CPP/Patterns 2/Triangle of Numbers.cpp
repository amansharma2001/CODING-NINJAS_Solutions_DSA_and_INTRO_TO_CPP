#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i=0;
    while (i<n){
        int space =1 ;
        while( space <n-i){
            cout<<" ";
            space++;
        }
        int j = i+1;
        while(j<=2*i+1)
        {
            cout<<j;
            j++;
        }
        int k = 2*i;
        while(k>i){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
}