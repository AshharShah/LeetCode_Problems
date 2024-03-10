# Minimum Remove To Make Valid Parenthesis 1249
`https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/`
Solution:
- We add parenthesis to a stack only.
- If we have a opening parenthesis we push it to the stack.
- If we have a closing parenthesis we check if we have a matching opening one at the top of the stack, if so we remove it from the stack. Else we add the parentesis to the stack.
- Once we have remove matching opening and closing parenthesis we are left with the ones we have to discard.
- We save the indexes in the stack of the parenthesis that we have encountered for easy removal from the orignal string and record keeping.

