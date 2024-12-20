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
    ListNode* middleNode(ListNode* head) {
        ListNode*current=head;
        int cnt=1;
        while(current!=NULL){
            current=current->next;
            cnt++;
        }
       int middleindex;
       if(cnt%2==0){
        middleindex=(cnt/2)-1;
       }
       else{
        middleindex=(cnt/2);
       }
       current=head;
       for(int i=0;i<middleindex;i++){
        current=current->next;
       }
       return current;
    }
};
