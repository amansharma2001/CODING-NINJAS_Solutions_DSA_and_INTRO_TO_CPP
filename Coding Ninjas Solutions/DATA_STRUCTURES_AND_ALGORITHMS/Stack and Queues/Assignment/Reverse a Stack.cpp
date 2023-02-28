void reverseStack(stack<int> &input, stack<int> &extra) {
   
    while(!input.empty()){
        
        int x=input.top();
        
        input.pop();
        extra.push(x);
        
        
    }
    input=extra;
}