#include <stack>
bool isBalanced(string exp) 
{	
    
    stack <char> s1;
    if(exp.empty())
        return true;
    if(exp[0]==')' || exp[0]=='}' || exp[0]==']')
        return false;
    
    if(exp.size()%2==1)
        return false;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='['|| exp[i]=='{')
            s1.push(exp[i]);
        else if(!s1.empty())
        {
        if(exp[i]==')' && s1.top()=='(')
                s1.pop(); 
        if(exp[i]==']' && s1.top()=='[')
                s1.pop();
        
        if(exp[i]=='}' && s1.top()=='{')
                s1.pop();
        }
        else
            return false;
        
    }
    if(s1.empty())
    	return true;
    else
        return false;
   
}