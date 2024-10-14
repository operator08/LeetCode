#include <queue>
class Solution {
public:    
    long long maxKelements(vector<int>& nums, int k) {
        long long n = nums.size();
        
    
        long long ans = 0;
        priority_queue<long long> pq;

        for (long long i = 0; i < n; i++) {
            pq.push(nums[i]);
        }

        for (long long j = 0; j < k; j++) {
            long long maxElement = pq.top();
            ans += maxElement;
            pq.pop();
            pq.push(ceil(maxElement / 3.0));
        }  
        return ans;
    }
};