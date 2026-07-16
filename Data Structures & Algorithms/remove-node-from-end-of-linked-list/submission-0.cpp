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
        ListNode*k=head;
        int size=0;
        while(k!=NULL){
            size++;
            k=k->next;

        }
        n=size-n+1;
        int count=1;
        ListNode*prev=new ListNode;
        ListNode*mover=head;
        if(n == 1){
        ListNode* temp = head;
             head = head->next;
            delete temp;
             return head;
        }
        while(mover!=NULL){
            if(count<n){
                count++;
                prev=mover;
                mover=mover->next;
            }
            if(count==n){
                prev->next=mover->next;
                delete mover;
                break;
            }
            
        }
        return head;

        
    }
};
