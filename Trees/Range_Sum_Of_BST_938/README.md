# Range Sum Of BST 938
Solution:
- We will use the technique of inorder traversals.
- If a node is NULL we will simply return 0 which would be our base case.
- We will first check all the nodes and do the following:
  - If the value is in between low and high we add the value to our traversal solution.
  - Else we add 0 to our traversal solution.
- When we complete the backtracking, we will have the final sum of the nodes that have a value between low and high (inclusive).
