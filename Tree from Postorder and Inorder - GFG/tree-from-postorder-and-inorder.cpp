//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
 int pos(int in[], int start , int end , int key){
            for(int i=start; i<=end;i++)
                if(in[i] == key)
                    return i;
                    
            return -1;
        }
     
     
     Node* solve(int in[], int post[], int &index, int instart,int inend,int n)
     {
         if(instart > inend || index <0)
            return NULL;
            
        int element = post[index--];
        
        
        int position = pos(in,instart,inend,element);
        
        Node* root= new Node(element);
        root->right = solve(in,post,index,position+1,inend,n);
        root->left = solve(in,post,index,instart,position-1,n);
        
        return root;
     }
     
        
     
     
    Node* buildTree(int in[],int post[], int n)
    {
     int postorderIndex=n-1;
     
     Node* ans= solve(in,post,postorderIndex,0,n-1,n);
     return ans;
    }
