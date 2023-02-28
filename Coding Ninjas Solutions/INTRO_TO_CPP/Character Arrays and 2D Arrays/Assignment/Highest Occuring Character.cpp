#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    int freq[256]={0};
    
    int max=0;
    char k;
    for(int i=0;input[i]!='\0';i++)
    {
        freq[input[i]]++;
    }
    
    for(int j=0;j<256;j++)
    {
        if(freq[j]>max)
        {
            max=freq[j];
            k = char(j);
        }
    }
    return k;
    
}   

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}