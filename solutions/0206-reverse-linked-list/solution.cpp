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
    ListNode* reverseList(ListNode* head) {
        ListNode*current=head;
        ListNode*prev=NULL;
        ListNode*Node1=new ListNode;
        while(current!=NULL){
           Node1=current->next;
           current->next=prev;
           prev=current;
           current=Node1;
        }
        return prev;
    }
};
