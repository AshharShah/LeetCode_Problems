# Path Sum 112

`https://leetcode.com/problems/path-sum/?envType=study-plan-v2&envId=top-interview-150`

Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.

## Solution

- Create a global variable, add the current node as we move along the tree.
- Remove a node once the tree is processed.
- At any point in the left node, if the value matches, return true. Else return false.
