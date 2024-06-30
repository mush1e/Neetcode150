### How I solved this
- Transformed `s` so all the characters are lowercase
- Removed all the non alphanumberic characters
- had 2 pointers `i` and `j` at the beginning and end of our string, and incremented and decremented them simultaneously
- compare `s[i]` and `s[j]` at every iteration, if they arent equal return false
- at the end of the loop return true.

Took me ~ 5mins v easy
