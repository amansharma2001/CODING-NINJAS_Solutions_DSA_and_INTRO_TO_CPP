#include <iostream>

using namespace std;

void pAPC(string input,string output) {
    char comb[27]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    
    int temp =  int(input[0])-int('0');
    
    pAPC(input.substr(1),output+comb[temp]);
    if(input[1]!='\0'){
    	int x = 10*(input[0]-'0')+(input[1]-'0');
        if(x<=26){
            pAPC(input.substr(2),output+comb[x]);
        }
    }
    
}
void printAllPossibleCodes(string input) {
	string output = "";
    pAPC(input,output);
}

int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
