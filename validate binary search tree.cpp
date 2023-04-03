
class Solution
{
public:
    int marker;
    vector<int> data;
    unordered_map<int, int> mp;
    void validator(TreeNode *root)
    {
        if (root == NULL)
            return;

        validator(root->left);
        data.push_back(root->val);
        validator(root->right);
    }
    bool isValidBST(TreeNode *root)
    {
        validator(root);
        int max = INT_MAX;
        vector<int> data1;
        for (int i = 0; i < data.size(); i++)
        {
            data1.push_back(data[i]);
        }
        sort(data1.begin(), data1.end());
        for (int i = 0; i < data.size() - 1; i++)
        {
            cout << data[i] << " " << data1[i] << endl;
            if (data1[i] != data[i] || data1[i] >= data1[i + 1])
                return false;
        }

        return true;
    }
};