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
/*class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
       if (!head || !head->next) {
            return head;  
        }
        ListNode* current = head;        
        ListNode* odd = head;           
        ListNode* even = head->next;     
        ListNode* evenHead = even;      
        int index = 1; 
        while (current != nullptr && current->next != nullptr) {
            if (index % 2 != 0) {
                odd->next = current->next;
                odd = odd->next;  
            }
            else {
                even->next = current->next;
                even = even->next; 
            }
            current = current->next;  
            index++;  
        }
        if (even != nullptr) {
            even->next = nullptr;
        }
        odd->next = evenHead;
        return head;  */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;

        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;

        return head;
    }
};

