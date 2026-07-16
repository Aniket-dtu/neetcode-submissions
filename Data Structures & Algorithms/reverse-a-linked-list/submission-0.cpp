class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head == NULL)
            return NULL;

        vector<int> temp;

        ListNode* nextt = head;

        while(nextt != NULL){
            temp.push_back(nextt->val);
            nextt = nextt->next;
        }

        int size = temp.size();

        ListNode* head2 = new ListNode(temp[size-1]);
        ListNode* mover = head2;

        for(int i = size-2; i >= 0; i--){
            ListNode* node = new ListNode(temp[i]);
            mover->next = node;
            mover = node;
        }

        return head2;
    }
};
