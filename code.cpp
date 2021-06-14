/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        queue<TreeNode *>A;
        A.push(root);
        int sum=0;
        while(!A.empty())
        {
            TreeNode *temp=A.front();
            A.pop();
            if(temp->val>=low && temp->val<=high)
            {
                sum=sum+temp->val;
            }
            if(temp->left)
            {
                A.push(temp->left);
            }
            if(temp->right)
            {
                A.push(temp->right);
            }
        }
        return sum;
    }
};
