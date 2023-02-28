#include <iostream>
#include<cstring>
using namespace std;


bool checkPalindrome(char input[]) {
    static int s=0;
    static int e= strlen(input)-1;
    static bool result;
    
    while(s<e){
        if(input[s]!=input[e]){
            result =false;
        }
        else{
            result = true;
            s++;
    		e--;
            checkPalindrome(input);
        }
        s++;
    	e--;
    }
    return result;
}



/*
int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}*/
