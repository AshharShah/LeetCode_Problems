# Removing Stars From A String 2390

`https://leetcode.com/problems/removing-stars-from-a-string/?envType=study-plan-v2&envId=leetcode-75`

Solution:

- Add the string elements to a stack, if we encounter a \* we pop from the stack.
- Once all the \*'s are processed, we simply reverse the remaining elements using another stack to form our output string.
