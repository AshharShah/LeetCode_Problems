# Search In BST 700
Solution:
- We traverse the tree from the top in the following matter:
  - If the value is greater than the value of the node we search the right subtree.
  - Else if the value is less, we search the left subtree.
- We stop when we reach the NULL node or when we find the node whose value is equal and return the node.
