# Miniminze Maximum Pair Sum in Array 1877
`https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/`
Solution:
- We want to keep pairs of the largest element with the smallest element.
- Then the 2nd largest with the 2nd smallest and so on..
- To do this we will sort our array and use the two pointer approach to select first and last elements for a pair. 
- We will then check if the sum of these pairs is less than the sum of all other pairs, if yes this will be our new pair.

