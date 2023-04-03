
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<int> vect, temp;
        vector<vector<int>> ans;
        TreeNode *node;
        queue<TreeNode *> q;
        int counter = 0;
        if (root == NULL)
            return ans;
        q.push(root);
        counter = q.size();
        while (!q.empty())
        {
            counter--;

            node = q.front();
            int x = node->val;
            vect.push_back(x);
            q.pop();
            if (counter == 0)
            {
                vect.push_back(-5050);
            }
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            if (counter == 0)
            {
                counter = q.size();
            }
        }
        for (int i = 0; i < vect.size(); i++)
        {
            if (vect[i] == -5050)
            {
                ans.push_back(temp);
                temp.clear();
            }
            else
            {
                temp.push_back(vect[i]);
            }
        }
        return ans;
    }
};