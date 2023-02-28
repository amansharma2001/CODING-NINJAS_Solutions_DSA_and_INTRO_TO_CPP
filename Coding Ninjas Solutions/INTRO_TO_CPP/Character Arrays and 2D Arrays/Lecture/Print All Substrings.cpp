#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    int i=0;
    int n=strlen(input);
    while(i<=n-1){
        int j = i;
        while(j<=n-1){
            int k=i;
            while(k<=j){
                cout<<input[k];
                k++;
            }
            cout<<endl;
           	j++;
            
        }i++;
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}