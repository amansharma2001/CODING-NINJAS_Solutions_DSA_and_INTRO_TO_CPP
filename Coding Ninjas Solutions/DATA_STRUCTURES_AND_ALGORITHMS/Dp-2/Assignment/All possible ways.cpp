#include <iostream>
using namespace std;


#include<bits/stdc++.h>
int getAllWays(int a,int b,int num)
{
    int val=a-pow(num,b);
    
    if(val==0) 
        return 1;
    else if(val < 0) 
        return 0;
    return getAllWays(val,b,num+1)+getAllWays(a,b,num+1);
}
int getAllWays(int a,int b){
    return getAllWays(a,b,1);
}


/*
int main()
{
    int a, b;
    cin >> a >> b;
    cout << getAllWays(a, b);
}*/