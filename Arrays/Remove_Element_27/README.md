# Remove Element 27
`https://leetcode.com/problems/remove-element/`
Solution:
- We maintain two pointers, k and i.
- In the k pointer we store end of our organized array and we use i to loop over our input array.
- If the element is not equal to value we insert it at k and move on incrementing k.
- Else k is not incremented.

