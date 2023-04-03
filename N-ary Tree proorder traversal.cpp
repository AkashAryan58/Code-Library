
class Solution
{
public:
    vector<int> vect;
    void pre(Node *root)
    {
        if (root == NULL)
            return;
        vect.push_back(root->val);
        for (int i = 0; i < root->children.size(); i++)
        {
            pre(root->children[i]);
        }
        return;
    }
    vector<int> preorder(Node *root)
    {
        pre(root);
        return vect;
    }
};