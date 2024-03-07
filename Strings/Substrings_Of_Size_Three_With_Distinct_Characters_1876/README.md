# Substrings of size three with distinct characters 1876

Solution:

- We iterate over the string using a for loop.
- For each iteration we generate a substring of the next 2 and the current pointer.
- We then check if all the values in the substring are distinct, if yes we increment our solution.
- Finally when the string is processed we return the number of good substrings.
