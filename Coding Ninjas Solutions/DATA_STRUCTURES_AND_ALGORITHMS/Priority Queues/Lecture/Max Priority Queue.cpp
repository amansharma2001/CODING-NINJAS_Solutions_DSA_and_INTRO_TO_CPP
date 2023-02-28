#include <iostream>
using namespace std;


#include<vector>
class PriorityQueue {
    vector<int> v;

   public:
    PriorityQueue() {
        
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        v.push_back(element);
        
        int c_i = v.size()-1;
        
        while(c_i > 0){
            int p_i = (c_i - 1)/2;
            
            if(v[c_i] > v[p_i])
            swap(v[c_i],v[p_i]);
        
            else
                break;
            
        	c_i = p_i;    
        }
        
        
    }

    int getMax() {
        return v[0];
    }

    int removeMax() {
        // Implement the removeMax() function here
        
        int ans = v[0];
        
        v[0] = v[v.size()-1];
        
        v.pop_back();
        
        int p_i=0;
        int l_c=2*p_i+1;
        int r_c=2*p_i+2;
        
        while(l_c < v.size())
        {	
            int max_i=p_i;
            if(v[max_i] < v[l_c])
                max_i = l_c;
            if(v[max_i] < v[r_c])
                max_i = r_c;
            
            if(p_i==max_i)
                break;
            
            swap(v[p_i],v[max_i]);
            
            p_i= max_i;
            l_c=2*p_i+1;
        	r_c=2*p_i+2;
        }
        return ans;
    }

    int getSize() { 
        return v.size();
    }

    bool isEmpty() {
        return v.size()==0;
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
            case 2:  // getMax
                cout << pq.getMax() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMax() << "\n";
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
}

*/