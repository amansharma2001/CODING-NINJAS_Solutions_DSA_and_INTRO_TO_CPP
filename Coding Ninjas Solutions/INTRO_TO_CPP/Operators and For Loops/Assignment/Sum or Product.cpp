#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    
    int c;
    cin>>c;
    int s=0,p=1;
    if(c==1){
        for(int i =0;i<=n;i++){
            s=s+i;
        }
        cout<<s;
    }
    else if (c==2){
        for(int i=1;i<=n;i++)
        {
            p=p*i;
        }
        cout<<p;
    }
    else{
        cout<<-1;
    }
}
