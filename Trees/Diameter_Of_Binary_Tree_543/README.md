# Diametre Of Binary Tree 543
`https://leetcode.com/problems/diameter-of-binary-tree/`
Solution:
- At any node the diametre with respect to that node will be the sum of the height of left and right subtrees.
- We can keep a global variable which can hold the max height uptill a given node representing the diametre.
- Keep updating this global variable when ever the sum of left and right subtrees of a node is greater, this is the new diametre.
- Once the tree is traversed we will have the diametre of the tree.
