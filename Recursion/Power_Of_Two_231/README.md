# Explaination:

- We recursivly divide the value of n by 2.
- If we encounter a non-zero remainder we return false.
- We keep doing this till we reach the base case where n/2 == 1.
- If there was no issues till the base case then we return true.
- For n == 0 we already know it will be false.
