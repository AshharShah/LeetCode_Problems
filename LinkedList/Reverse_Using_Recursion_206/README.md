# Explaination

- Recursively reach the last node in the list, that will be our new head.
- We have to save the new head and keep returning it.
- At any node we simply flip the direction of the arrows as follows:
  - head->next->next = head will replaced 2->3->NULL as 2<-3
  - head->next = NULL will replace 2->3 as NULL<-2
  - this will result in NULL<-2<-3 with 3 as the new head
