### How I solved this
- Created variables
  - `hash_set` which is an unordered set to help with quick lookup times and eliminate duplicates
  - `total` to save lognest length
  - `count` to save current length
- Iterated over `nums` and populated `hash_set`
- Iterated over `nums`
  - checked if current element exists within `hash_set`, if not continue
  - erase current element from `hash_set` and set count to 1
  - keep checking if elements after the current element exist in the `hash_set`, while they do remove them update count by +1 and increment the element value
  - keep checking if elements before the current element exist in the `hash_set`, while they do remove them update count by -1 and decrement the element value
  - check if `count` after both looks is greater than `total`, if it is make `total` = `count`
  - after the loop return `total`

  took me ~15 mins, logic was quite intuitive
