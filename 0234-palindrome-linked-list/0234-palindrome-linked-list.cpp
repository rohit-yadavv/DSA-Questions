class Solution {
public:
    void reverse(ListNode*& head, ListNode* curr, ListNode* prev) {
        if(!curr) {
            head = prev;
            return;
        }
        reverse(head, curr->next, curr);
        curr->next = prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
 
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* reversedHead = nullptr;
        reverse(reversedHead, slow, nullptr);

        while(head && reversedHead) {
            if(head->val != reversedHead->val) {
                return false;
            }
            head = head->next;
            reversedHead = reversedHead->next;
        }

        return true;
    }
};
