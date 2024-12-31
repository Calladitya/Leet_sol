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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode* current = head;
        int cnt = 0;

        while (current != NULL) {
            current = current->next;
            cnt++;
        }

        current = head;
        int mid = cnt / 2;

        for (int i = 0; i < mid - 1; i++) {
            current = current->next;
        }

        if (current->next != NULL) {
            current->next = current->next->next;
        }

        return head;
    }
};

