#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
    int j=0;
    for(int i=0;i<=strlen(input);i++){
        
        if(input[i]==c){
            continue;
        }
        else{
            input[j]=input[i];
            j++;
        }
    }
    
}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}