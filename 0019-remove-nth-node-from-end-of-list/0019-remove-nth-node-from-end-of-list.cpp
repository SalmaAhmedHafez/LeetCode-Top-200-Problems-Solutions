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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr = head, *prev = NULL;
        int cnt = 0;
        while(curr != NULL){
            cnt ++;
            curr = curr -> next;
        }
        n = cnt - n;
        if(n == 0) return head -> next;

        int idx = 0;
        curr = head;
        while(idx < n){
            prev = curr;
            curr = curr -> next;
            idx ++;
        }
        if(prev != NULL) prev -> next = curr -> next;
        return head;
    }
};