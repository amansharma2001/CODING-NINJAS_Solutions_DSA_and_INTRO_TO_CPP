#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include <string>
#include <vector>

class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            if (!root->isTerminal) {
                root->isTerminal = true;
                return true;
            } else {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        if (insertWord(root, word)) {
            this->count++;
        }
    }
	private:
    
    bool searchpattern(TrieNode *root1, string word)
    {
        if(word.size()==0)
        {	
            return true;
        }
        
        int index= word[0]-'a';
        if(root1->children[index]!=NULL)
        {
            return searchpattern(root1->children[index],word.substr(1));
        }
        return false;
    }
    public:
    bool patternMatching(vector<string> v, string pattern) {
        for(int i=0;i<v.size();i++)
        {
            string word = v[i];
            
            while(word.size()!=0)
            {	
               
                    insertWord(word);
                word=word.substr(1);
                
            }
        }
        
        return searchpattern(root,pattern);
    }
};


/*
int main() {
    Trie t;
    int n;
    cin >> n;
    string pattern;
    vector<string> vect;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        vect.push_back(word);
    }
    cin >> pattern;

    cout << (t.patternMatching(vect, pattern) ? "true" : "false");
}*/