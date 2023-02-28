#include <iostream>
#include <string>
using namespace std;

void pp(string input,string output){
    if(input.length()==0){
        cout<<output<<endl;
    }
    
    for(int i=0;i<input.length();i++)
    {
        swap(input[0],input[i]);
        pp(input.substr(1),output+input[0]);
    }
    
}
void printPermutations(string input){
	string output = "";
    pp(input,output);
}

int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}