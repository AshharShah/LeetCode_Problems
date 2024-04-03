# Maximum Average Subarray 1

`https://leetcode.com/problems/maximum-average-subarray-i/?envType=study-plan-v2&envId=leetcode-75`

Solution:

- We maintain a window size of k, first we find the initial window average.
- Next we iterate over the array, as we only move 1 step forward we remove the last element of the window and add the new element at the window end.
- We keep doing this to find the maxAverage.
