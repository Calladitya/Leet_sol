/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        std::map<ListNode*,int>mpp;
        ListNode*current=head;
       // int index=0;
        while(current!=NULL){
            if(mpp.find(current)!=mpp.end()){
                return current;
            }
            mpp[current]=1;
            current=current->next;
        }
        return NULL;
    }
};
