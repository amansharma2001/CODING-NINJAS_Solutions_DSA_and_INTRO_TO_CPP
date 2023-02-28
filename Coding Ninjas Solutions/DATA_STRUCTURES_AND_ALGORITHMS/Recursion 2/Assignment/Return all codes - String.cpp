#include <iostream>
using namespace std;

int ret(string input, string output[10000],string out,int m){
      if(input.length()==0)
    {
        output[m]=out;
        return m+1;
    }
 char a[]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int x=input[0]-48;
    char s=a[x];
     int s1=ret(input.substr(1),output,out+s,m);
    int s2=s1;
    if(input[1]!='\0'){
    int y=input[1]-48;
        int e=(x*10)+y;
    if(e<=26){
        char q=a[e];
        s2= ret(input.substr(2),output,out+q,s1);
     }
    }
    return s2;
}
int getCodes(string input, string output[10000]) {
    int m=0;
    string out="";
     int size=ret(input,output,out,m); 
    return size;
}

int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
