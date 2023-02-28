#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    
    int x=1;
    while(x<=n)
    {   
        int ap=3*x+2;
        if(ap%4!=0){
          cout<<ap<<" "; 
        }
        else{
            n++;
        }
        
        x++;
    }
}
