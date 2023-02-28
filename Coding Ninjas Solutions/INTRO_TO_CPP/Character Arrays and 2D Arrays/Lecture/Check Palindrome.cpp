#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    
    int s=0;
    int e=strlen(str)-1;
    while(s<e){
        if(str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
        
    }
    return true;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}