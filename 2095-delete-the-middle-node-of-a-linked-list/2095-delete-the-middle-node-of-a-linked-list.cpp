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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return nullptr;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* slowPrev = nullptr;

        while(fast && fast->next){
            fast = fast->next->next;
            slowPrev=slow;
            slow = slow->next;
        }
        slowPrev->next = slow->next;
        return head;
    }
};