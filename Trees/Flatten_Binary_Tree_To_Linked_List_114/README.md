# Flatten Binary Tree To Linked List 114

Solution:

- We see that the preorder traversal gives us the linked list that we want.
- We create a vector to store the results of the pre-order traversal of the tree.
- Once the vector is created we then do the following:
  - Iterate from the root and move towards the right of the tree.
  - As we move to the right we set the left pointer to NULL and update the next right node to the next node present in the vector.
  - When we iterate over all the elements in the vector we will have our solution.
