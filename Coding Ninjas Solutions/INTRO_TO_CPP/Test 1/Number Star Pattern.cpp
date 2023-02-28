#include <iostream>

using namespace std;

int main()
{
    int n;
     cin>>n;
     
    int i=0;
    while(i<=n-1)
    {   
        int j=1;
        while (j<=n-i){
            cout<<j;
            j++;
        }
        
        int spaces = 0;
        while (spaces<i){
            cout<<"*";
            spaces++;
        }
        int spaces2 = 0;
        while(spaces2<i){
            cout<<"*";
            spaces2++;
        }
        int k=n-i;
        while(k>=1){
            cout<<k;
            k--;
        }
        
        cout<<endl;
        i++;
    }
}