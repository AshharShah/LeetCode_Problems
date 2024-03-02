# Merge Nodes In Between Zeros 2181
Most Optimal Solution:
- We iterate over the linked list till we reach the end.
- If we enounter a zero:
  - We sum all the next elements into the zero node till we encounter another zero.
  - We link the next zero node to the current zero node of the linked list.
  - We then move the head to the next zero node and again restart.
- At the end we have our answer list, we will simply remove the last elements which are not our requirements by using a for loop against the number of zeros.
  - If we have a 4 zeros, we will need to output a list of size 3.

