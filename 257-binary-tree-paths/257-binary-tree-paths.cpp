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
    
    vector <string> answer;
    
    void find(TreeNode* root, string ans){
        if(root == NULL){
            return;
        }
        
        if(root->left == NULL && root->right==NULL){
            ans+=to_string(root->val);
            answer.push_back(ans);
            return;
        }
        
        ans+=to_string(root->val)+"->";
        find(root->left, ans);
        find(root->right, ans);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        find(root, "");
        return answer;
    }
};