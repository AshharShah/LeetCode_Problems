# Min Abs Difference In BST 530

`https://leetcode.com/problems/minimum-absolute-difference-in-bst/?envType=study-plan-v2&envId=top-interview-150`

Given the root of a Binary Search Tree (BST), return the minimum absolute difference between the values of any two different nodes in the tree.

## Solution

- O(n) approach in which we take the current node and search the left and right subtrees for the minimum and update.
- We do this for each node in the tree.
