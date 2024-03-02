# Merge two sorted lists

Solution:
- We iterate over both the list till we reach the end of the lists.
- At any point, if the value of l1 is less than value of l2
  - We advance the list l1 forward and keep list l2 at the same pt.
- At any point, if the value of l2 is less than value of l1
  - We advance the list l2 forward and keep the list l1 at the same pt.
- When we reach the end of a list we start backtracking, this will join the lists together in a sorted order.

