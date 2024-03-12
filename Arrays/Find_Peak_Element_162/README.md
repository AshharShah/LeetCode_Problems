# Find Peak Element

`https://leetcode.com/problems/find-peak-element/`
Solution:

- This we have to do this in log(n) we will use the binary search approach to divide the array and search the mid element.
- We keep checking if the mid element is a peak.
- If not we check its left neighbour, if it is less than the value of the neighbour we move to the right subarray.
- Else we move to the left subarray.
- We do this till we find a peak from indexes [1 to n-1]
- If we dont find a peak here then we compare the corners of the array.
