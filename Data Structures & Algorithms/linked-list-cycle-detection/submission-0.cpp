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
    bool hasCycle(ListNode* head) {
        map<ListNode *,int>mpp;
        ListNode *mover=head;
        int flag=1;
        while(mover!=NULL){
            
            if(mpp.find(mover->next)!=mpp.end()){
                flag=0;
                break;

            }
            mpp[mover]++;
            mover=mover->next;

        }
        return (flag==1)?false:true;
        
    }
};
