#include<iostream>
using namespace std;

void printTable(int start, int end, int step) {

    while(start<=end){
        
        cout<<start<<" "<<((start-32)*5)/9<<endl;
        
        start+=step;
    }
    
}





int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}


