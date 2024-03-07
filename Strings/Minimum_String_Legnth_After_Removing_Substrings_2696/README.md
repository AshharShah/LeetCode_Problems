# Minimum String Legnth After Removing Substrings 2696

Solution:

- We maintain a stack and keep inserting elements into the stack one by one.
- At each insertion we check if the top 2 elements are AB or CD.
- If not, we simply continue else we remove them from the stack and again insert the next element.
- This processes repeats till all substrings are removed, at the end we return the size of the stack.
