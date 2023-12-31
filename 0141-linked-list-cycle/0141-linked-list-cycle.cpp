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
        ListNode * slow=head;
        ListNode * fast=head;
        if(slow==NULL || slow->next==NULL){
            return false;
        }
        do{
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
        }while(slow!=NULL && fast!=NULL && slow!=fast);
        if(slow==fast){
            return true;
        }
        return false;
    }
};