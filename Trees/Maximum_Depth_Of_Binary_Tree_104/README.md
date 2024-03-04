# Maximum Depth Of Binary Tree 104

Solution:

- We recursivly move down the tree and at each level we add 1 as we go down.
- When we move back up we select the maximum value from the left and right subtree to see which has the most depth.
- We keep moving up and adding 1 once we reach the root node we will have the max height.
- If we are at a NULL node we simply return 0 indicating it has no height and is the base case.
