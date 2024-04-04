# Count Good Nodes In Binary Tree 1448

`https://leetcode.com/problems/count-good-nodes-in-binary-tree/?envType=study-plan-v2&envId=leetcode-75`

Solution:

- We maintain a local variable for the maximum number encountered soo far.
- We check if it is small than the current value, if so we have found a good node. We update the value and pass it to the left and right children.
- This process repeats to find the total number of good nodes in a binary tree.
