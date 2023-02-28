#include <iostream>
using namespace std;

#include<cstring>
void replacePi(char input[]) {
	int n= strlen(input);
    if(input[0]=='\0')
        return ;
    if(input[0]!='p' || input[1]!='i')
        replacePi(input+1);
    if(input[0]=='p' && input[1]=='i'){
        int j=n+3;
        int i=n+1;
        for(;i>0;j--){
            input[j]=input[i];
            i--;
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
        replacePi(input+1);
        
    }
}



/*
int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}*/
