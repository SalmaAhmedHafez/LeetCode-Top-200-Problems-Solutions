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
    bool hasCycle(ListNode *head) {
        int tmp = 1e4+10;
        ListNode *curr = head;
        while(curr != NULL && (tmp--)){
            curr = curr -> next;
        }
        return (curr == NULL ? 0 : 1);
    }
};