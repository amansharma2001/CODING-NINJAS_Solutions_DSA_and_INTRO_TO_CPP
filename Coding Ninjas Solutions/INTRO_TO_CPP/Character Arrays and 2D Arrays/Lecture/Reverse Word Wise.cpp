#include <iostream>

using namespace std;

#include <cstring>
using namespace std;
void reverse(char str[],int start,int end){
    int temp;
    while(start<end){
        temp = str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
void reverseStringWordWise(char input[]) {
    int n=strlen(input);
    int i =0;
    reverse(input,i,n-1);
    
    int k=0;
    int s=0;
    int e=0;
    while(input[k]!='\0'){
        
        if(input[k]==' '){
            e=k-1;
        	reverse(input,s,e);
            s=k+1;
        }
        
        k++;
    }
    e=k-1;
    reverse(input,s,e);
}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
