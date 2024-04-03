# Delete the middle node of a linked list 2095

`https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/?envType=study-plan-v2&envId=leetcode-75`

Explaination:

- We maintan two pointers, once for slow and one for fast, the fast moves two spaces and slow moves one.
- When the fast reaches the end of the list, we know the slow is at the middle of the list.
- We maintain a 3rd ptr which stores the previous node of the stores, we simply make it point to the next of the slow's node hence removing slow from the list.
