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
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        int t=len-n;
        
        temp=head;
        if(len==0){
            return NULL;
        }
        if(len==n){
            return head->next;
        }
        len=0;
        while(temp){
            len++;
            if(len==t){
                temp->next=temp->next->next;
            }
          temp=temp->next;
        }
   return head;
    }
};