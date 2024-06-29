### How I solved this

- created an <int, int> hash map so I can store array values and indices
- iterated through the given vector and update the hash map appropriately
- iterated through vector again and looked for target-element making sure im not checking the same element twice
- when the element is found I return the index of the num and the value of the hash map at target-element

took me < 10 mins
