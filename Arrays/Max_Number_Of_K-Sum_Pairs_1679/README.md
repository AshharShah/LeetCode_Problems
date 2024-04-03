# Max Number Of K-Sum Pairs 1679

`https://leetcode.com/problems/max-number-of-k-sum-pairs/?envType=study-plan-v2&envId=leetcode-75`

Solution:

- Add values into a hash map, indexes will be the value of the element and it will store the frequencies that each number appears.
- Iterate over the array once more and now check the hash map to see if a pair exists, if so, remove it from the hash map and continue.
