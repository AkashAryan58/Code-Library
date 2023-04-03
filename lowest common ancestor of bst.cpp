
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       TreeNode   *a,*bp,*ancestor;
        a=root;
        bp=root;
       ancestor=a;
        while(a==bp && (a!=NULL && bp!=NULL))
        {
            ancestor=bp;
            if( a!=NULL && a->val>p->val)
            a=a->left;
            else if(a!=NULL && a->val<p->val)
            a=a->right;


            if(bp!=NULL && bp->val>q->val)
            bp=bp->left;
            else if (bp!=NULL && bp->val<q->val)
            bp=bp->right;
           
        }
        return ancestor;

    }
};