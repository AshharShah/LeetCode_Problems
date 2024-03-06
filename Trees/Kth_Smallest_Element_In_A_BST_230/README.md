# Kth Smallest Element In A BST

Solution:

- To find the k-th smallest element in a BST, we can create a vector which will store the nodes of the BST.
- We insert the values into the vector in a InOrder traversal fashion as we know In-Order traversal of a BST gives a sorted array.
- We then simply take the kth index from the start of the vector which would be our solution.
