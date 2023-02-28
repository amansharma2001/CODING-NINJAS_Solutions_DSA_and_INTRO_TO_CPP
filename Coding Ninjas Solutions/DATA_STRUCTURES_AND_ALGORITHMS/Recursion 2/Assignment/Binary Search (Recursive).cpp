#include <iostream>
using namespace std;

int binarySearch(int input[], int size, int element) {
    static int s=0;
    static int e=size-1;
    
    if(s>e)
        return -1;
    else{
        int m=(s+e)/2;
        if(input[m]==element)
            return m;
        else if(input[m]<element){
            s=m+1;
            return binarySearch(input,(m/2)+1,element);
        }
        else{
            e=m-1;
            return binarySearch(input,size/2,element);
        }
    }
    

}


int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
