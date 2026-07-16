class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right)
            return head;

        int k = right - left + 1;
        map<int, ListNode*> mpp;

        int count = 1;
        ListNode* mover = head;
        ListNode* afterRight = nullptr;

        while (mover != nullptr) {
            if (count < left) {
                count++;
                mover = mover->next;
            }
            else if (count > right) {
                afterRight = mover;
                break;
            }
            else {
                mpp[k] = mover;
                k--;
                mover = mover->next;
                count++;
            }
        }

        ListNode* mover2 = head;

        if (left == 1) {
            head = mpp.begin()->second;
        } else {
            int counter = 1;
            while (counter < left - 1) {
                mover2 = mover2->next;
                counter++;
            }

            mover2->next = mpp.begin()->second;
            mover2 = mover2->next;
        }

        auto it = mpp.begin();
        ++it;

        ListNode* curr;
        if (left == 1)
            curr = head;
        else
            curr = mover2;

        for (; it != mpp.end(); it++) {
            curr->next = it->second;
            curr = curr->next;
        }

        curr->next = afterRight;

        return head;
    }
};