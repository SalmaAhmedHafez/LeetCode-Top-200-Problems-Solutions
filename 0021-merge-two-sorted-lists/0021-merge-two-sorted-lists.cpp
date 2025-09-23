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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *curr1 = list1, *curr2 = list2, *start = list2;
        if(list2 == NULL) return list1;
        ListNode *prev = NULL;

        while(curr1 != NULL || curr2 != NULL){
            if(curr2 == NULL) {
                if(prev != NULL) prev -> next = curr1;
                prev = curr1;
                curr1 = curr1 -> next;
            }
            else if(curr1 == NULL){
                if(prev != NULL) prev -> next = curr2;
                prev = curr2;
                curr2 = curr2 -> next;
            }
            else{
                if(curr2 -> val > curr1 -> val){
                    ListNode *nxt_node1 = curr1 -> next;
                    if(prev != NULL) prev -> next = curr1;
                    else start = curr1;
                    prev = curr1;
                    curr1 -> next = curr2;
                    curr1 = nxt_node1;
                }
                else{
                    prev = curr2;
                    curr2 = curr2 -> next;
                }
            }
        }
        return start;   
    }
};