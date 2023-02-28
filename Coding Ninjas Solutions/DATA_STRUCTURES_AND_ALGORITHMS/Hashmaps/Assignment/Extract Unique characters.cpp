#include <iostream>
#include <string>
using namespace std;

#include<unordered_map>
string uniqueChar(string str) {
	unordered_map<char,int> map;
    
    for(int i=0;i<str.length();i++)
    {
        map[str[i]]++;
    }
            
    string output;
            
	for(int i=0;i<str.length();i++)
    {
		if(map[str[i]]!=0)
        {
            output+=str[i];
            map[str[i]]=0;
        }
        else
            continue;
    }
            
    return output;
}


/*
int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}*/