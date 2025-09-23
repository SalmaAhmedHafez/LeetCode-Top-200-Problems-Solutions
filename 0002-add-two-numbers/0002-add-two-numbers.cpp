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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *curr1 = l1, *curr2 = l2, *prev = NULL;
        int carry = 0;
        while(curr1 != NULL || curr2 != NULL){
            if(curr2 == NULL){
                int sm = curr1 -> val + carry;
                if(sm < 10) carry = 0;
                else {
                    carry = 1;
                    sm -= 10;
                }
                curr1 -> val = sm;
                prev = curr1;
                curr1 = curr1 -> next; 
            }
            else if(curr1 == NULL){
                int sm = curr2 -> val + carry;
                if(sm < 10) carry = 0;
                else {
                    carry = 1;
                    sm -= 10;
                }
                prev -> next = curr2;
                curr2 -> val = sm;
                prev = curr2;
                curr2 = curr2 -> next;
            }
            else{
                prev = curr1;
                int sm = curr1 -> val + curr2 -> val + carry;
                if(sm < 10) carry = 0;
                else{
                    carry = 1;
                    sm -= 10;
                }
                curr1 -> val = sm;
                curr1 = curr1 -> next;
                curr2 = curr2 -> next;
            }
        }
        if(carry){
            ListNode *node = new ListNode(1);
            prev -> next = node;
        }
        return l1;
    }
};