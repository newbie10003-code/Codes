#include<bits/stdc++.h>
using namespace std;

class Tree
{
    public:
        int data;
        Tree* left;
        Tree* right;

        Tree(int d)
        {
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};

Tree* buildTree(Tree* root)
{
    cout << "Enter data:" << endl;
    int data;
    cin >> data;
    root = new Tree(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for left insertion of:" << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter the data for right insertion of:" << data <<  endl;
    root -> right = buildTree(root -> right);
    return root;
}

void levelOrderTraversal(Tree* root)
{
    queue <Tree*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Tree* temp = q.front();
        q.pop();
        
        if (temp == NULL)
        {
            // Purana level completely traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << " ";
            if (temp -> left)
            {
                q.push(temp -> left);
            }
            if (temp -> right)
            {
                q.push(temp -> right);
            }
        }
    }   
}

void reverseLevelOrderTraversal(Tree* root)
{
    stack <Tree*> s;
    s.push(root);
    s.push(NULL);
    while (!s.empty())
    {
        Tree* temp = s.top();
        s.pop();
        
        if (temp == NULL)
        {
            if (temp -> right)
            {
                s.push(temp -> right);
            }
            if (temp -> left)
            {
                s.push(temp -> left);
            }
        }
        else
        {
            // Purana level completely traverse ho chuka hai
            cout << temp -> data << " ";
            if (!s.empty())
            {
                s.push(NULL);
            }
        }
    }
}



int main()
{
    Tree* root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    levelOrderTraversal(root);
    reverseLevelOrderTraversal(root);
    return 0;
}