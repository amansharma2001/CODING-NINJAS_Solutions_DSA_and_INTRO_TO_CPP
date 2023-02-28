#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    
    int i = 1;
    int root=0;
    while(i*i<=n){
        root++;
        i++;
    }
    cout<<root;
}
