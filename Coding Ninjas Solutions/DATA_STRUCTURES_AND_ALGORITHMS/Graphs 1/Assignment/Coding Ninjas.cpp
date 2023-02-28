#include <iostream>
#include <vector>
using namespace std;



bool bfs( vector< vector<char> > &board , int n , int m ,int ci , int cj,vector< vector<bool> >&visited,string s)
{
    if(s.size()==0)
    {
        return true;
    }
    visited[ci][cj]=true;


    
    if(ci+1<n && !visited[ci+1][cj] && board[ci+1][cj]==s[0])// down
    {
        if( bfs(board,n,m,ci+1,cj,visited, s.substr(1)))
            return true;
    }

    if(ci-1>=0 && !visited[ci-1][cj] && board[ci-1][cj]==s[0])// up

    {
        if(  	bfs(board,n,m,ci-1,cj,visited, s.substr(1)))
            return true;
    }
    if(cj-1>=0 && !visited[ci][cj-1] && board[ci][cj-1]==s[0])// left
    {
        if( bfs(board,n,m,ci,cj-1,visited, s.substr(1)))
            return true;
    }

    if(cj+1<m && !visited[ci][cj+1] && board[ci][cj+1]==s[0])// right
    {
        if( bfs(board,n,m,ci,cj+1,visited, s.substr(1)))
            return true;
    }


    if(ci+1<n && cj-1>=0&&!visited[ci+1][cj-1] && board[ci+1][cj-1]==s[0])// down left
    {
        if( bfs(board,n,m,ci+1,cj-1,visited, s.substr(1)))
            return true;
    }

    if(ci+1<n && cj+1<m&&!visited[ci+1][cj+1] && board[ci+1][cj+1]==s[0])// down right
    {
        if( bfs(board,n,m,ci+1,cj+1,visited, s.substr(1)))
            return true;
    }


    if(ci-1>=0 && cj-1>=0 && !visited[ci-1][cj-1] && board[ci-1][cj-1]==s[0])// up left 
    {
        if( bfs(board,n,m,ci-1,cj-1,visited, s.substr(1)))
            return true;
    }

    if(ci-1>=0 && cj+1<m&& !visited[ci-1][cj+1] && board[ci-1][cj+1]==s[0])// up right
    {
        if(	 bfs(board,n,m,ci-1,cj+1,visited, s.substr(1)))
            return true;
    }


    return false;
}




bool hasPath(vector<vector<char>> &board, int n, int m) {
vector<vector<bool> >visited(n,vector<bool>(m, false));
    for(int i=0; i<n ; i++)
    {    
        for(int j=0 ; j< m; j++)
    {
        if(board[i][j]=='C')
        {
            
            string s ="ODINGNINJA";
       
            if(bfs(board, n,m,i,j,visited,s))
                return true;

        }
    }
    }
    return false;

}






/*
int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }

    cout << (hasPath(board, n, m) ? 1 : 0);
}
*/