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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode *curr = head, *tail = NULL;
        while(curr != NULL){
            n++;
            if(curr->next == NULL){
                tail = curr;
            }
            curr = curr->next;
        }
        if(n<=1) return head;
        k = k%n;
        if(k == 0) return head;
        ListNode *nhead = NULL, *ntail = NULL;
        int moves = n-k;
        curr = head;
        for(int ctr = 1; ctr<=moves; ctr++){
            if(ctr == moves){
                ntail = curr;
            }
            curr = curr->next;
        }
        nhead = curr;
        tail->next = head;
        ntail->next = NULL;
        return nhead;
    }
};