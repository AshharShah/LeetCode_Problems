# Odd Even Linked List 328

Solution:

- We can solve this problem using two pointers, odd and even:
  - The odd pointer is at index 1.
  - The even pointer is at index 0.
- We iterate the linked list till the odd pointer is at the last index and perform the following steps:
  - Make odd's next the next of the even pointer.
  - Move odd to evens position.
  - Move even one position ahead of odd.
  - This will link all even and odd nodes together breaking the links in the orignal linked list.
- Now we have two end cases for either even or odd linked list.
  - For a odd size list, we simply connect the last node of the even list to the start of the odd list, and we set the last node of odd list to NULL.
  - For a even size list, we connect the last node of the even list to the start of the odd list.
