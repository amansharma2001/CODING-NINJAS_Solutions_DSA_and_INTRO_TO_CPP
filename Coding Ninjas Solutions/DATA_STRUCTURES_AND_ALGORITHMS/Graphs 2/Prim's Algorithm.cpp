#include <iostream>
#include<climits>
using namespace std;

int findMinVer(int* weight ,bool *visited ,int v)
{
    int MinVertex=-1;
    for(int i=0 ;i<v ;i++)
    {
        if(!visited[i] &&(MinVertex==-1 ||weight[i] < weight [MinVertex]))
            MinVertex=i;
    }
    return  MinVertex;
}
void primsMST(int ** graph , int v ,int e){
    
    int * parent= new int[v];
    bool* visited =new bool[v];
     int* weight =new int[v];
    for(int i=0 ;i<v;i++)
    {
        visited[i] = false;
        weight[i]=INT_MAX;
    }
  
    parent[0]=-1;
    weight[0]=0;
    
     for(int i=0;i<v-1;i++)
     { 
         int MinVertex= findMinVer(weight , visited , v);
         visited[MinVertex]= true;
     
         
         for(int j=0 ;j<v ;j++)
         {
	   if(graph[MinVertex][j]&&!visited[j]&&graph[MinVertex][j]<weight[j])
                {
                    weight[j]=graph[MinVertex][j] ;
                    parent[j]=MinVertex;
                }
         }
     }
    
    
    
    for(int i =1 ;i< v ;i++)
    {
		if(parent[i]<i)
        {
            cout<<parent[i]<<" "<< i<<" "<<weight[i]<<endl;
        }
        else 
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
    }
    
    
    delete[]parent;
    delete[]visited;
    delete[]weight;
 
    
    
}

int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
 
  
    int ** graph = new int* [V];
    for(int i= 0 ; i<V ;i++ )
    {
        graph[i] = new int[V];
         for(int j=0 ;j<V ; j++)
             graph[i][j]=0;
    }
    
    for(int i=0;i<E ;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        graph[x][y]=z;
        graph[y][x]=z;
    }
    
    primsMST(graph ,V,E);
    
  return 0;
}