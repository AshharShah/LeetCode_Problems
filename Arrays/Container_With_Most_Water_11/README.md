# Container With Most Water 11
`https://leetcode.com/problems/container-with-most-water/`

Solution:
- We can see that we have to select the minimum of the two heights which will be the height of the container.
- The distance between the two elements will be the breadth of our container.
- We can use the two pointer approach to solve this problem as follows:
  - We will start pointer i from 0.
  - We will start pointer j from n-1
  - Select the minimum of the two for the height and multiply it with the distance between them to get the current volume for the container.
  - If is is greater than the ones already found update it.
  - Now if the height of i is less than j we increment i to the next height, else we increment j.

