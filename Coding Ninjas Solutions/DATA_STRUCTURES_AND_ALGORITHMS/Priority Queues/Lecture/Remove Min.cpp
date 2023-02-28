#include <iostream>
#include <climits>
using namespace std;


#include <vector>
#include<bits/stdc++.h>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        
        if(isEmpty())
            return 0;
        int ans =  pq[0];
        
        pq[0] = pq[pq.size()-1];
        
        pq.pop_back();
        
        
        int parent_i = 0;
        int l_c = 2*parent_i +1;
        int r_c = 2*parent_i +2;
        
        while(l_c < pq.size())
        {	
            
            int min_i=parent_i;
         	
            if(pq[l_c]<pq[min_i])
                min_i=l_c;
            
            if(r_c < pq.size() && pq[r_c]<pq[min_i])
                min_i=r_c;
            if(min_i  == parent_i)
                break;
            
            swap(pq[parent_i],pq[min_i]);
            
            parent_i =min_i;
            l_c = 2*parent_i +1;
        	r_c = 2*parent_i +2;
        }
        return ans;
    }
};

/*
int main() {
    PriorityQueue pq;

    int choice;
    cin >> choice;

    while (choice != -1) {
        switch (choice) {
            case 1:  // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2:  // getMin
                cout << pq.getMin() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMin() << "\n";
                break;
            case 4:  // size
                cout << pq.getSize() << "\n";
                break;
            case 5:  // isEmpty
                cout << (pq.isEmpty() ? "true\n" : "false\n");
            default:
                return 0;
        }
        
        cin >> choice;
    }
}*/

