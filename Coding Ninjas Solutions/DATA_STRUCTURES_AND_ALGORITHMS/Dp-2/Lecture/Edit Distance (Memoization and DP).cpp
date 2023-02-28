#include <iostream>
#include <cstring>
using namespace std;

int edit(string s1, string s2,int **ans)
{
    
    int m=s1.size();
    int n=s2.size();
    
    if(s1.empty() || s2.empty())
        return max(s1.size(),s2.size());
    
    if(ans[m][n]!= -1)
        return ans[m][n];
    
    int op;
    if(s1[0]==s2[0])
    {
        op= edit(s1.substr(1),s2.substr(1),ans);
    }
    
    else
    {
        int x = edit(s1.substr(1),s2,ans)+1;
        int y = edit(s1,s2.substr(1),ans)+1;
        int z = edit(s1.substr(1),s2.substr(1),ans)+1;
        
        op= min(x,min(y,z));
    }
    
    ans[m][n] = op;
    
    return ans[m][n];
    
}
int editDistance(string s1, string s2) {
    int m=s1.size();
    int n=s2.size();
    
    int **ans = new int*[m+1];
    
    for(int i=0;i<=m;i++)
    {
        ans[i]=new int[n+1];
        for(int j=0;j<=n;j++)
            ans[i][j]= -1;
    }
	return edit(s1,s2,ans);
}


/*
int main()
{
	string s1;
	string s2;

	cin >> s1;
	cin >> s2;

	cout << editDistance(s1, s2) << endl;
}*/