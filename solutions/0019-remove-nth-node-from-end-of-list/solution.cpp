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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return NULL;
        }

        ListNode* current = head;
        int length = 0;
        while (current != NULL) {
            length++;
            current = current->next;
        }

        if (n == length) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        current = head;
        for (int i = 1; i < length - n; i++) {
            current = current->next;
        }

        ListNode* temp = current->next;
        current->next = current->next->next;
        delete temp;

        return head;
    }
};

