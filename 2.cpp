/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ret = new ListNode(0), *cur = ret;

        int carry = 0;
        while(l1 && l2) {
            cur->val = (l1->val + l2->val + carry)%10;
            carry = (l1->val + l2->val + carry)/10;
            
            l1 = l1->next;
            l2 = l2->next;
        
            if(l1 || l2){
                cur->next = new ListNode(0);
                cur = cur->next;
            }
        }
        while(l1) {
            cur->val = (l1->val + carry)%10;
            carry = (l1->val + carry)/10;
            l1 = l1->next;
            if(l1) {
                cur->next = new ListNode(0);
                cur = cur->next;
            }
        }
        while(l2) {
            cur->val = (l2->val + carry)%10;
            carry = (l2->val + carry)/10;
            l2 = l2->next;
            if(l2) {
                cur->next = new ListNode(0);
                cur = cur->next;
            }
        }
        if(carry) {
            cur->next = new ListNode(carry);
        }
        return ret;
    }
};

