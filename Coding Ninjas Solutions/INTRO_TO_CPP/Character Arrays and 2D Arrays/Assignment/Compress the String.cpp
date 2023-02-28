#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    // Write your code here.
    
    int n = input.length();
    int count = 1;
    string result = "";
    
    for(int i=0;i<n;i++){
    	if(input[i]==input[i+1]){
           	count++;
        }
        else{
            result = result + input[i];
            if(count>1){
                char ch =count + '0';
                result+= ch;
            }
            count = 1;
        }
    }
    return result;
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}