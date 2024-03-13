# Longest Substring Without Repeating Characters
`https://leetcode.com/problems/longest-substring-without-repeating-characters/`


Solution: 
- We maintain a set of the current alphabets we have encountered and use the sliding window technique.
- At each point we check to see if we have encountered the element in the set, if not we add it to the set and find the max legnth.
- If we enounter a value we have seen we continue to remove it from our set and increment the left pointer.

