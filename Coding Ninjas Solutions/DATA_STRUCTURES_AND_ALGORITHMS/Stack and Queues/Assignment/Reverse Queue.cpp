#include<queue>
#include<stack>
void reverseQueue(queue<int> &input) {
	stack<int> extra;
    int x;
    
    while(!input.empty()){
        x=input.front();
        extra.push(x);
        input.pop();
    }
    while(!extra.empty()){
        int y= extra.top();
        input.push(y);
        extra.pop();
    }
}