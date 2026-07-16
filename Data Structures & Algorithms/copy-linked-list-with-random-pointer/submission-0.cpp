class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, int> mpp;
        map<int,Node*> mp;
        Node* mover1 = head;
        Node* head1 = new Node(0);
        Node* mover2 = head1;
        int count1 = 0;

        while (mover1 != NULL) {
            Node* temp = new Node(mover1->val);
            mpp[mover1] = count1;
            mp[count1]=temp;
            mover2->next = temp;
            mover2 = mover2->next;
            mover1 = mover1->next;
            count1++;
        }

        Node* mover3 = head;
        Node* mover4 = head1->next;

        while (mover4 != NULL) {
            if (mover3->random == NULL) {
                mover4->random = NULL;
            }
            else {
                int id=mpp[mover3->random];
                mover4->random=mp[id];
            }

            mover3 = mover3->next;
            mover4 = mover4->next;
        }

        return head1->next;
    }
};
