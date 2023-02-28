#include<iostream>
using namespace std;

bool checksequenece(char large[] , char*small) {
    
    
    char ch = small[0];
    	
    	if(ch=='\0')
        {
            return true;
        }
        for(int i=0;large[i]!='\0';i++){
        	if(ch==large[i])
            {
                int x=i;
                return checksequenece(large+x+1,small+1);
            }
            
        }
	
    return false;
}


int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
