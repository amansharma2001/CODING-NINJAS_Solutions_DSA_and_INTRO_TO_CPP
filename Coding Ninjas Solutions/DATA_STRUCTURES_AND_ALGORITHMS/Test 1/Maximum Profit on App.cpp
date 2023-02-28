#include <iostream>
using namespace std;

#include<bits/stdc++.h>
int maximumProfit(int budget[], int n) {
    sort(budget,budget+n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
       int csum=budget[i]*(n-i);
        if(csum>=sum)
            sum=csum;
    }
    return sum;
}

int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    
}
