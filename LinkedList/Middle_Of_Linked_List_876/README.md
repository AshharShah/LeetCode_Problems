# Middle Of Linked List 876

Solution:
- Create two pointers, one fast and one slow.
- The fast one moves two spaces ahead while the slow one moves one space ahead.
- If the the next node of the fast one is null then we have reached the last node of a odd linked list.
- If the fast node itself bocomes null then we have reached the last node of a even linked list.
- We simply return the slow pointer when we reach the end of either of the odd or even linked lists.

