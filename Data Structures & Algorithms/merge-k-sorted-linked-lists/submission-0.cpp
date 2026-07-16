

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>temp;
        int k=lists.size();
        for(int i=0;i<k;i++){
            ListNode*head=lists[i];
            while(head!=NULL){
                temp.push_back(head->val);
                head=head->next;
            }
        }
        sort(temp.begin(),temp.end());
        int size=temp.size();
        ListNode * head1=new ListNode;
        ListNode *mover=head1;
        for(int i=0;i<size;i++){
            ListNode * temp1=new ListNode(temp[i]);
            mover->next=temp1;
            mover=mover->next;
        }
        return head1->next;


        
    }
};
