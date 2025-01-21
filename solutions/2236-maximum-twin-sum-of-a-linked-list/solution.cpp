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
    int pairSum(ListNode* head) {
        vector<int> value;
        ListNode* current = head;
        int length = 0;

        // Step 1: Calculate the length of the linked list and store values
        while (current != NULL) {
            value.push_back(current->val);
            current = current->next;
            length++;
        }
        int max_sum = 0;
        for (int i = 0; i < length / 2; i++) {
            int sum = value[i] + value[length - 1 - i];
            max_sum = max(max_sum, sum);
        }

        return max_sum;
    }
};

