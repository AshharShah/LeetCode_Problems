# Find Pivot Index 724
`https://leetcode.com/problems/find-pivot-index/`

Solution:
- We will first compute the sum of the entire array.
- Now we will iterate over the array to find the left and right sum of each element.
- The rightSum will be total - leftSum - value of current element.
- If we do not find the index, we add the current element to the value of rightSum.

