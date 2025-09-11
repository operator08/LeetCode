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
    ListNode* reverseList(ListNode* head) {
        if (!head) return nullptr;
        ListNode* currentNode = head;
        ListNode* prevNode = nullptr;
        ListNode* nextNode = head->next;
        while (currentNode) {
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode = nextNode;
            if (nextNode) nextNode = nextNode->next;
        }
        return prevNode;
    }
};