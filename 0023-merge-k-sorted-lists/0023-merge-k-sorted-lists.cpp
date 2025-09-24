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
        int n = lists.size();
        vector <ListNode*> curr(n);
        for(int i = 0; i < n; i++){
            curr[i] = lists[i];
        }
        ListNode *prev = NULL, *head = NULL;
        while(1){
            ListNode *mn = new ListNode(10005);
            int idx = 0, cnt = 0;
            for(int i = 0; i < n; i++){
                if(curr[i] != NULL && curr[i] -> val < mn -> val){
                    mn = curr[i];
                    idx = i;
                }
                else if(curr[i] == NULL) cnt ++;
            }
            if(cnt == n) break;
            curr[idx] = curr[idx] -> next;
            if(prev == NULL) head = mn;
            else prev -> next = mn;
            prev = mn;
        }
        return head;
    }
};