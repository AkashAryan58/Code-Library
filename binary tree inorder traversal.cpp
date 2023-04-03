
class Solution
{
public:
    vector<int> vect;
    void inorder(TreeNode *node)
    {
        if (node == nullptr)
            return;
        else
        {
            inorder(node->left);
            vect.push_back(node->val);
            inorder(node->right);
        }
        return;
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        inorder(root);
        return vect;
    }
};