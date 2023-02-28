#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int a=0,b=1;
    int c;
    int i=2;
    if(n==0 || n==1 )
    {
        cout<<n;
       
    }
    
        
    else{
        while(i<=n){
            c=a+b;
            a=b;
            b=c;
            i++;
        }
        cout<<c;
    }
     return 0;
}