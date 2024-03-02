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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* headcpy = new ListNode;
        ListNode* temp = new ListNode;
        headcpy = head;

        int zeros = 0;

        while(headcpy->next != NULL){
            if(headcpy->val == 0){
                zeros++;
                temp = headcpy->next;
                while(temp->val != 0){
                    headcpy->val += temp->val;
                    temp = temp->next;
                }
                if(temp->next == NULL){
                    break;
                }
                headcpy->next = temp;
                headcpy = temp;
            }
        }

        ListNode* newHead = new ListNode;
        newHead = head;
        for(int i = 0; i < zeros - 1; i++){
            newHead = newHead->next;
        }

        newHead->next = NULL;

        return head;
    }
};
