#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    int arr[256]={0};
    bool result=true;
    int n1=strlen(input1);
    int n2=strlen(input2);
    
    if(n1!=n2){
        return false;
    }
    
    for(int i=0;input1[i]!='\0';i++){
        arr[input1[i]]++;
    }
    
    for(int j=0;input2[j]!='\0';j++){
        arr[input2[j]]--;
    }
    
    for(int k=0;k<256;k++){
        if(arr[k]!=0)
        {
            result = false;
        }
    }
    return result;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}