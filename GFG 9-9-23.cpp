class Solution
{
    // return the Kth largest element in the given BST rooted at 'root'
    int count=0;
    int ans=0;
    public int kthLargest(Node root,int k)
    {
        //Your code here
        reverseinorder(root,k);
        return ans;
    }
    public void reverseinorder(Node root,int k){
        if(root==null) return;
        reverseinorder(root.right,k);
        count++;
        if(count==k){
            ans=root.data;
            return;
        }
        reverseinorder(root.left,k);
    }
}