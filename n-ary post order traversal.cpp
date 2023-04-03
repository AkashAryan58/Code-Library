
class Solution
{
public:
    vector<int> vect;
    void post(Node *root)
    {
        if (root == nullptr)
        {
            return;
        }
        for (int i = 0; i < root->children.size(); i++)
        {
            post(root->children[i]);
        }
        vect.push_back(root->val);
    }
    vector<int> postorder(Node *root)
    {
        post(root);
        return vect;
    }
};