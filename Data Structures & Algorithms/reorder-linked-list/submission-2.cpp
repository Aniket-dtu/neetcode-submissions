class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return;

        // Find middle
        ListNode *slow=head, *fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        // Reverse second half
        ListNode *prev=NULL;
        ListNode *curr=slow->next;
        slow->next=NULL;

        while(curr){
            ListNode *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        // Merge
        ListNode *first=head;
        ListNode *second=prev;

        while(second){
            ListNode *temp1=first->next;
            ListNode *temp2=second->next;

            first->next=second;
            second->next=temp1;

            first=temp1;
            second=temp2;
        }
    }
};