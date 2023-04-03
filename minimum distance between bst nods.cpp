
class Solution
{
public:
    vector<int> vect;
    void inorder(TreeNode *root)
    {
        if (root == nullptr)
            return;
        inorder(root->left);
        vect.push_back(root->val);
        inorder(root->right);
        return;
    }
    int minDiffInBST(TreeNode *root)
    {
        inorder(root);
        int minm = INT_MAX;
        int i = 0, j = 1;
        for (j; j < vect.size(); j++)
        {
            minm = min(minm, vect[j] - vect[i]);
            i++;
        }
        return minm;
    }
};