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
class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {

        if (head->next == NULL || head == NULL)
        {
            return NULL;
        }

        ListNode *slow = new ListNode;
        ListNode *fast = new ListNode;
        ListNode *previous = new ListNode;

        slow = head;
        fast = head;
        previous = slow;

        while (fast != NULL && fast->next != NULL)
        {
            previous = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        previous->next = slow->next;
        return head;
    }
};