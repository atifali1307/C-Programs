class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void traverse(Node *root,priority_queue<int>& pq){
        if(!root) return;
        pq.push(root->data);
        traverse(root->left,pq);
        traverse(root->right,pq);
    }
    void putElements(Node* root,priority_queue<int>& pq){
        if(!root) return;
        putElements(root->right,pq);
        root->data=pq.top();
        pq.pop();
        putElements(root->left,pq);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        priority_queue<int>pq;
        traverse(root,pq);
        putElements(root,pq);
        return root;
    }
};