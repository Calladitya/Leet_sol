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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = nullptr;

        while (current != nullptr && current->next != nullptr) {
            prev = current;

            if (prev->val == current->next->val) {
                prev->next = current->next->next;
            } else {
                current = current->next;
            }
        }

        return head;
    }
};

