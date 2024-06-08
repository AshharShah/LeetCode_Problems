# Majority Element 169

`https://leetcode.com/problems/majority-element/description/?envType=study-plan-v2&envId=top-interview-150`

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

Constraints:

n == nums.length
1 <= n <= 5 \* 104
-109 <= nums[i] <= 109

# Solution

- Create a map to store the frequencies of the elements in the array.
- Iterate over the array elements and save the one with the maximum frequency.