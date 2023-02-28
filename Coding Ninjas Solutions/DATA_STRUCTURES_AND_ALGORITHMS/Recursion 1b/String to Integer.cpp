#include <iostream>
using namespace std;

int stringToNumber(char input[]) {
    
    int i=0;
    static int n =0;
    if(input[0]=='\0')
        return 0;
    else{
        n=n*10+(int(input[i])-int('0'));
        stringToNumber(input+1);
    }
	
    return n;
}




int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
