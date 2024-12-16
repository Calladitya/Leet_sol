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
    while(current!=NULL){
        ListNode*newnode=current->next;
        current->next=prev;
        prev=current;
        current=newnode;
    }
    return prev;
}
    ListNode* doubleIt(ListNode* head) {
        if (!head) {
            return NULL;
        }
           head = reverseList(head);
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        ListNode* node = head;
        int carry = 0;

        while (node != NULL) {
            int product = node->val +node->val + carry;
            carry = product / 10;
            current->next = new ListNode(product % 10);
            current = current->next;
            node = node->next;
        }

        if (carry != 0) {
            current->next = new ListNode(carry);
        }

       return reverseList(dummyHead->next);
    }
};

