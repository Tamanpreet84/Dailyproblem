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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;

        if (root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int n = q.size();

            vector<int> level;

            for (int i = 0; i < n; i++) {

                TreeNode* f = q.front();
                q.pop();

                level.push_back(f->val);

                if (f->left)
                    q.push(f->left);

                if (f->right)
                    q.push(f->right);
            }

            ans.push_back(level);
        }
        for(int i=0; i<ans.size();i++){
            if(i%2==1){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};

        
    
