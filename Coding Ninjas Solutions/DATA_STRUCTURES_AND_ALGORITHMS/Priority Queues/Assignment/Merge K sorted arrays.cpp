#include <iostream>
#include <vector>
using namespace std;

#include<vector> 
#include<queue>
using namespace std;
vector<int> mergeKSortedArrays(vector<vector<int>*> input) {
    
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0;i<input.size();i++){
        vector<int> *current=input[i];
        for(int j=0;j<current->size();j++){
            
            pq.push(current->at(j));
        }
    }
    vector<int> ans;
    int size=pq.size();
    for(int i=0;i<size;i++){
        
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}


/*
int main() {
    int k;
    cin >> k;

    vector<vector<int> *> input;

    for (int j = 1; j <= k; j++) {
        int size;
        cin >> size;
        vector<int> *current = new vector<int>;

        for (int i = 0; i < size; i++) {
            int a;
            cin >> a;
            current->push_back(a);
        }

        input.push_back(current);
    }

    vector<int> output = mergeKSortedArrays(input);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    return 0;
}
*/