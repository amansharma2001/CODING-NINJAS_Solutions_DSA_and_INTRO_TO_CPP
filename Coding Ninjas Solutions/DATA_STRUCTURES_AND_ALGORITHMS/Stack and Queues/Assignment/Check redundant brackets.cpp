#include<stack>
bool checkRedundantBrackets(string exp) {
	stack<char> s;
    int count=0;
    for(int i =0;i<exp.size();i++){
        
        
        if(exp[i]=='(' && exp[i+1]=='(')
            return true;
        
        
        if(exp[i]==')' && s.top()!='('){
            s.pop();
            count++;
        }
        if(exp[i]==')' && s.top()=='('){
            count=0;
        }
        s.push(exp[i]);
        
    }
    if(count==0)
        return true;
    else
        return false;
}