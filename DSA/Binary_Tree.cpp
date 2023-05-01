#include<bits/stdc++.h>
using namespace std;

class Tree
{
    public:
        int data;
        Tree* left;
        Tree* right;

        Tree(int val)
        {
            this -> data = val;
            this -> left = NULL;
            this -> right = NULL;
        }
};

Tree* buildTree(Tree* root)
{
    int data;
    cout << "Enter data: ";
    cin >> data;
    root = new Tree(data);
    if(data == -1)
    {
        return NULL;
    }
    cout << "Enter data for left insertion: " << root -> data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for right insertion: " << root -> data << endl;
    root -> right = buildTree(root -> right);
    return root;
}

void levelOrderTraversal(Tree* root)
{
    queue <Tree*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Tree* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << " ";
            if(temp -> left)
            {
                q.push(temp -> left);
            }
            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }
    }
}

// Reverse Level Order Traversal ?

void inorderTraversal(Tree* root)
{
    if(root != NULL)
    {
        inorderTraversal(root -> left);
        cout << root -> data << " ";
        inorderTraversal(root -> right);
    }
}

// Building tree from level order traversal
Tree* buildTreefromLOT(Tree* root)
{
    queue <Tree*> q;
    cout << "Enter data: ";
    int data; cin >> data;
    root = new Tree(data);
    q.push(root);
    while(!q.empty())
    {
        Tree* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp -> data << endl;
        int leftData; cin >> leftData;
        if(leftData != -1)
        {
            temp -> left = new Tree(leftData);
            q.push(temp -> left);
        }

        cout << "Enter right node for: " << temp -> data << endl;
        int rightData; cin >> rightData;
        if(rightData != -1)
        {
            temp -> right = new Tree(rightData);
            q.push(temp -> right);
        }   
    }
    return root;
}

int countLeafNodes(Tree* root, int &count)
{
    // int count = 0;
    if(root != NULL)
    {
        countLeafNodes(root -> left, count);
        if(root -> left == NULL && root -> right == NULL)
        {
            count = count + 1;
        }    
        countLeafNodes(root -> right, count);
    }
    return count;
}

int main()
{
    Tree* root = NULL;

    // Creating a tree
    // root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // cout << "Printing level order traversal" << endl;
    // levelOrderTraversal(root);
    // cout << endl;

    // cout << "Printing Inorder traversal" << endl;
    // inorderTraversal(root);
    // cout << endl;
    
    root = buildTreefromLOT(root);
    cout << "Printing Inorder traversal" << endl;
    inorderTraversal(root);
    cout << endl;
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    int count = 0;
    cout << countLeafNodes(root, count) << endl;

    return 0;
}