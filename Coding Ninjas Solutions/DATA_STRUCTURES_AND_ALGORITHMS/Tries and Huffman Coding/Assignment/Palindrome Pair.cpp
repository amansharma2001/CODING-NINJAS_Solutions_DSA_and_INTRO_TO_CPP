#include <bits/stdc++.h>
using namespace std;

class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;
    int childCount;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
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

    bool add(TrieNode *root, string word) {
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
            root->childCount++;
        }

        // Recursive call
        return add(child, word.substr(1));
    }

    void add(string word) {
        if (add(root, word)) {
            this->count++;
        }
    }

    /*..................... Palindrome Pair................... */

    bool s(TrieNode *root, string word)
    {
        if (word.size() == 0) { 
            return true;

        }
        int idx=word[0]-'a';
         TrieNode *child;
        if(root->children[idx])
        {
            child=root->children[idx];
            return s(child,word.substr(1));
        }
        else
        {
            for(int i=0;i<26;i++)
            {
                if(root->children[i])
                    return false;
            }
            return true;
        }
            return false;
    }
    bool search(string word) {
        return s(root,word);
    }
    bool isPalindromePair(vector<string> v) {
      for(int i=0;i<v.size();i++)
      {
         add(v[i]);
      }
       for(int i=0;i<v.size();i++)
        {
            string word = v[i];
            string word2 = word;
            int j=0;
            int k = word2.size()-1;
            
            while(j<=k)
            {
                swap(word2[j],word2[k]);
                j++;
                k--;
            }
           if(search(word2))
               return true;
       }
        return false;
    }
};


/*
int main() {
    Trie t;
    int n;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    cout << (t.isPalindromePair(words) ? "true" : "false");
}*/