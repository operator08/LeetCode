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
    // C styled
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode* ptr = head;
        while (ptr != nullptr) {
            n++;
            ptr = ptr->next;
        }    
        ptr = head;
        int i = 0;
        while (ptr != nullptr) {
            ptr = ptr->next;
            i++;
            if (i == ceil(n / 2)) {
                return ptr;
            }
        }
        return head;
    }
};