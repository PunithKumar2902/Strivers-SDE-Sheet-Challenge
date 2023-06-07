/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> ans;
void inorder(TreeNode *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    ans.push_back(root->data);
    inorder(root->right);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    ans.clear();
    inorder(root);
    return ans;
}
