/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *temp = new ListNode;
        ListNode *prev = new ListNode;

        temp = node;
        prev = node;

        while (temp->next != NULL)
        {
            temp->val = temp->next->val;
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL;
    }
};