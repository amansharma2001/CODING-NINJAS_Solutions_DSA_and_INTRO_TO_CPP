#include <iostream>
using namespace std;

#include<cstring>
void pairStar(char input[]) {
    int n=strlen(input);
    if(input[0]=='\0')
        return ;

    if(input[0]!=input[1])
       pairStar(input+1);
    
    else{
        int j=n+1;
        for(;j>1;j--){
            input[j]=input[j-1];
        }
        input[j]='*';
        pairStar(input+1);
    }
    
}
/*
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}*/
