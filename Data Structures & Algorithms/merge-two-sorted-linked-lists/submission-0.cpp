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
        ListNode * temp1=list1;
        ListNode * temp2=list2;
        ListNode * head3 =new ListNode();
        ListNode *mover=head3;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                mover->next=new ListNode(temp1->val);
                temp1=temp1->next;
                mover=mover->next;
            }
            else{
                mover->next=new ListNode(temp2->val);
                temp2=temp2->next;
                mover=mover->next;

            }
        }
        while (temp1 != NULL) {
            mover->next = new ListNode(temp1->val);
            mover = mover->next;
            temp1 = temp1->next;
        }

        // Remaining nodes of list2
        while (temp2 != NULL) {
            mover->next = new ListNode(temp2->val);
            mover = mover->next;
            temp2 = temp2->next;
        }
        return head3->next;
    }
};
