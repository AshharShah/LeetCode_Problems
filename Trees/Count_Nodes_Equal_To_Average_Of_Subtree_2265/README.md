# Count Nodes Equal To Average Of Subtree 2265

Solution:
- We recursivly move down in the subtree in a DFS order.
- We sum up the left and right nodes with the current node value which gives us the sum of the subtree.
- We keep a record of the total number of elements in each sub tree using a pair of integers.
- For the total number of nodes in the sub tree we add 1 to the left and right values of the count pair.
- If the values when divided are equal to the value of the root node of the subtree we update our global integer which stores the total number of nodes in the tree which are a part of our solution.
