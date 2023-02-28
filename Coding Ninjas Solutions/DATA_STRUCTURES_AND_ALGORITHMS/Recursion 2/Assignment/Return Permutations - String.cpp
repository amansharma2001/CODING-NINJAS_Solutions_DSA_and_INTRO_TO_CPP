#include <iostream>
#include <string>

using namespace std;

int h(string input, string output[],string out,int m)
{
    if(input.length()==1)
    {
        output[m]=out+input[0];
        m++;
        return m;
    }
    int s2=m;
    for(int i=0;i<input.length();i++)
    {
        swap(input[0],input[i]);
        int s1=h(input.substr(1), output,out+input[0],s2);
        s2=s1;
    }
    return s2;
}
int returnPermutations(string input, string output[]){
   	string out="";
    int m=0;
    int size=h( input, output,out,m);
    return size;
}

int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
