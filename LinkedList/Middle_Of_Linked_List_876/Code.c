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
        ListNode* fast = new ListNode;
        fast = head;

        while(fast->next != NULL){
            fast = fast->next->next;
            head = head->next;
            if(fast == NULL){
                break;
            }
        }
        return head;
    }
};
