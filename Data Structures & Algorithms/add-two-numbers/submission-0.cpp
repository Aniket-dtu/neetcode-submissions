class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *mover1=l1;
        ListNode *mover2=l2;
        int carry=0;
        ListNode *head=new ListNode;
        ListNode *mover=head;
        while(mover1!=NULL && mover2!=NULL){
            int sum=mover1->val+mover2->val+carry;
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
                ListNode *temp=new ListNode(sum);
                mover->next=temp;
                mover=mover->next;
                mover1=mover1->next;
                mover2=mover2->next;

            }
            else{
                ListNode *temp=new ListNode(sum);
                carry=sum/10;
                sum=sum%10;
                mover->next=temp;
                mover=mover->next;
                mover1=mover1->next;
                mover2=mover2->next;
            }

        }
        while(mover1!=NULL){
            int sum = mover1->val + carry;
             carry = sum / 10;
            sum = sum % 10;

            ListNode *temp = new ListNode(sum);
            mover->next=temp;
            mover=mover->next;
            mover1=mover1->next;
        }
        while(mover2!=NULL){
            int sum = mover2->val + carry;
            carry = sum / 10;
            sum = sum % 10;

            ListNode *temp = new ListNode(sum);
            mover->next=temp;
            mover=mover->next;
            mover2=mover2->next;
        }
        if (carry) {
             mover->next = new ListNode(carry);
        }
        return head->next;

    }
};
