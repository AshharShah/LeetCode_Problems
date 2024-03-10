# Repeated DNA Sequences 187
`https://leetcode.com/problems/repeated-dna-sequences/`
Solution:
- We maintain a hashmap which keeps a record of the recorded elements of size 10 in the array as we iterate.
- If an element was previously found once we update our answer array and increment the value in the hashmap.
- Else we just increment the hashmap value and move forward.

