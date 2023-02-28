
#include <iostream>

using namespace std;

int main()
{
    char ch;
    ch= cin.get();
    
    int count_ch=0;
    int count_digit=0;
    int count_spaces=0;
    
    while(ch!='$'){
        if (ch>='0' && ch<='9')
        {
            count_digit++;
            ch=cin.get();
        }
        else if (ch==' ' || ch=='\n' || ch=='\t'){
            count_spaces++;
            ch=cin.get();
        }
        else{
            count_ch++;
            ch=cin.get();
        }
        
    }
    
    cout<<count_ch<<" "<<count_digit<<" "<<count_spaces;
}