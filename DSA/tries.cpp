#include<bits/stdc++.h>
using namespace std;

class trieNode
{
    public:
        char data;
        trieNode* children[26];
        bool isTerminal;

        trieNode(char ch)
        {
            this -> data = ch;
            for (int i = 0; i < 26; i++)
            {
                children[i] = NULL;
            }
            this -> isTerminal = false;
        }
};

class trie
{
    public:

        trieNode* root;

        trie()
        {
            root = new trieNode('\0');
        }

        void insertUtil(trieNode* root, string word)
        {
            if(word.size()  == 0)
            {
                root -> isTerminal = true;
                return;
            }
            // Assumption word will be in lower case
            int index = word[0] - 'a';
            trieNode* child;
            if (root -> children[index] != NULL)
            {
                child = root -> children[index];
            }
            else
            {
                child = new trieNode(word[0]);
                root -> children[index] = child;
            }
            insertUtil(child, word.substr(1));
        }

        void insertWord(string word)
        {
            insertUtil(root, word);
        }

        bool searchUtil(trieNode* root, string word)
        {
            if(word.length() == 0)
            {
                return root -> isTerminal;
            }
            int index = word[0] - 'a';
            trieNode* child;
            if (root -> children[index] != NULL)
            {
                child = root -> children[index]; 
            }
            else
            {
                return false;
            }
            return searchUtil(child, word.substr(1));
        }

        bool searchWord(string word)
        {
            return searchUtil(root, word);
        }

        void deleteWord(string word)
        {
            if(word.length() == 0)
            {
                root -> isTerminal = false;
                return;
            }
            int index = word[0] - 'a';
            trieNode* child;
            if (root -> children[index] != NULL)
            {
                child = root -> children[index]; 
            }
            deleteWord(child, word.substr(1));
        }
};

int main()
{
    trie* t = new trie();
    t -> insertWord("newbie");
    t -> insertWord("bunnu");
    t -> insertWord("hello");
    cout << t -> searchWord("bunny") << endl;
    return 0;
}