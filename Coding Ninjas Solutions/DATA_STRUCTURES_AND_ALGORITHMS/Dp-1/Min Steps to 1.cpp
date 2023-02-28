#include <bits/stdc++.h>
using namespace std;


#include<bits/stdc++.h>
int countMinStepsToOne(int n)
{
	if(n==1)
        return 0;
    
    if(n%3==0)
    {
        return 1 + min(countMinStepsToOne(n/3),countMinStepsToOne(n-1));
    }
    if(n%2==0)
    {
        return 1 + min(countMinStepsToOne(n/2),countMinStepsToOne(n-1));
    }
    if(n%2 == 0 && n%3==0)
    {
        return 1 + min(countMinStepsToOne(n/3),countMinStepsToOne(n/2));
    }
                        
    return 1+ countMinStepsToOne(n-1);
}

/*
int main()
{
	int n;
	cin >> n;
	cout << countMinStepsToOne(n);
}*/