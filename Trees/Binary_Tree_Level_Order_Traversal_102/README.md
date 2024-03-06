# Binary Tree Level Order Traversal 102
Solution:
- When we insert and pop the root element of a tree have have 1st level.
- Now the current elements in the queue are the 2nd level elements:
  - We pop the current elements in the queue and save them in a vector.
  - We add their children into the queue which represent the 3rd level.
  - We repeat this process till we the queue is empty.
  - Repeating step 1 and 2 gives us the level order traversal.
