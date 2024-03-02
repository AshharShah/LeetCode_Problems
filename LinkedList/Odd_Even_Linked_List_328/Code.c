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
    ListNode* oddEvenList(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* even = new ListNode;
        ListNode* odd2 = new ListNode;
        ListNode* odd = new ListNode;

        int even_odd = 0;

        even = head;
        odd = head->next;
        odd2 = head->next;

        while(odd->next != NULL){
            even->next = odd->next;
            even = odd;
            odd = even->next;
            even_odd++;
        }

        if(odd->next == NULL && (even_odd % 2 != 0)){
            even->next = NULL;
            odd->next = odd2;
        }
        else{
            even->next = odd2;
        }

        return head;
    }
};
