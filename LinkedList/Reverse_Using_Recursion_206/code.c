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
        // base case to check if the node is the last node
        if(head == NULL || head->next == NULL){
            return head;
        }
        // recursively reach the last node, store as the new head node
        ListNode* newHead = reverseList(head->next);

        // reverse the order of the nodes in the linked list
        head->next->next = head;
        head->next = NULL;

        // return the new root node
        return newHead;
    }
};
