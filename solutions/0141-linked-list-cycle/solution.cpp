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
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
       std:: map<ListNode*,int>mpp;
        ListNode*current=head;
        while(current!=NULL){
            if(mpp.find(current)!=mpp.end()){
                return true;
            }
            mpp[current]=1;
            current=current->next;
        }
        return false;
    }
};
