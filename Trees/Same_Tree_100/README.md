# Same Tree 100

`https://leetcode.com/problems/same-tree/?envType=study-plan-v2&envId=top-interview-150`

Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Example 1:
Input: p = [1,2,3], q = [1,2,3]
Output: true

## Solution

- Recursively iterate both trees using depth first search.
- Check if either of them is false, if soo return the false one recursively else return true.
