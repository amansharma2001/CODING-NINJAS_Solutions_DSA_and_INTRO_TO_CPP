#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;


void keypad(int num, string output){
    string comb[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(num==0){
        cout<<output<<endl;
        return ;
    }
    
    string temp = comb[num%10];
    
    for(int i=0;i<temp.size();i++)
    {
        keypad(num/10,temp[i]+ output);
    }
    
}
void printKeypad(int num){
	string out = "";
    keypad(num, out);
}



int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
