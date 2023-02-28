#include <iostream>
#include <cstring>
using namespace std;

void reverse(char input[],int s, int e){
    
    while(s<e){
        swap(input[s],input[e]);
        s++;
        e--;
    }
    
}
void reverseEachWord(char input[]) {
    int n=strlen(input);
    int i=0;
    int s=0;
    int e=0;
    
    while(input[i]!='\0'){
        if(input[i]==' '){
            e=i-1;
            reverse(input,s,e);
            s=i+1;
        }
        i++;
    }
    reverse(input,s,n-1);
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}