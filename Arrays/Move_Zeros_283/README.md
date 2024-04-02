# Move Zeros

`https://leetcode.com/problems/move-zeroes/?envType=study-plan-v2&envId=leetcode-75`

Explaination:

- Iterate over the array with 2 pointers.
- One keeps moving over the array, the other moves only when we add a non zeros element encountered by the first pointer at the current position.
- Add the remaining zeros at the end.
