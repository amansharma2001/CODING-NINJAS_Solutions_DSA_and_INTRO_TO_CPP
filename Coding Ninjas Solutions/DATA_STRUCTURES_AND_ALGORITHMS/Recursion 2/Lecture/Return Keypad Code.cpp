#include <iostream>
#include <string>
using namespace std;

#include <string>
#include<math.h>
using namespace std;

int keypad(int num, string output[]){
    
    if(num==0||num==1){
        output[0]="";
        return 1;
    }
    int smallnum=num/10;
    int out= keypad(smallnum,output);
    int rem=num%10;
    string comb[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    string p=comb[rem];
    int j=0;
    int k=0;
    int u=0;
    string temp[100000];
    for(j=0;j<p.length();j++)
    {
        for( k=0;k<out;k++){
        temp[u]=output[k] + p[j];
        u++;
        }
    }
    int a=0;
    for(int q=0;q<u;q++)
    {
        output[a]=temp[q];
        a++;
    }
    return a; 
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
