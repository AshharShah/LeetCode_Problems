# Linked List Cycle 141
Solution:
- Create a map which can store Linked List nodes, this keeps a record of the visited nodes.
- Move along the linked list and check if a node exists in the map.
- If the current node is already in the list we return true, this means that there is a cycle.
- Else we simply return false when we reach the end, implying that there was no cycle.

