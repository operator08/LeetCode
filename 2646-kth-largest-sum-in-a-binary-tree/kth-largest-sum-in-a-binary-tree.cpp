typedef long long ll;
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<ll> ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            ll sum = 0;
            ll size = q.size();
            for (ll i = 0; i < size; i++) {
                TreeNode* tmp = q.front();
                q.pop();

                if (tmp->left)  q.push(tmp->left);
                if (tmp->right) q.push(tmp->right);

                sum += (ll) tmp->val;
            }

            ans.push_back(sum);
        } 

        sort(ans.begin(), ans.end());

        int n = ans.size();
        return (n >= k) ? ans[n - k] : -1;
        // 0 1 2
    }
};