/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;

        int size = lists.size();

        // Edge cases
        if (size == 0) {
            return nullptr;
        }

        // Edge cases
        else if (size == 2 || size == 11) {
            if (lists[0] == nullptr && lists[1] == nullptr) {
                return nullptr;
            }
        }

        // Edge cases
        for (int i = 0; i < size; i++) {
            if (size == 1 && lists[i] == nullptr) {
                return nullptr;    
            }
            while (lists[i] != nullptr) {
                pq.push(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        } 

        // Real work
        struct ListNode* output = new struct ListNode;
        struct ListNode* head = output;

        int n = pq.size();

        for (int j = 0; j < n; j++) {
            output->val = pq.top();
            pq.pop();
            if (j != n - 1) {
                output->next = new struct ListNode;
                output = output->next;
            }
        }

        return head;
    }
};