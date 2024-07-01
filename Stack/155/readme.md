### How I solved this
- Created Member Variables
  - `min_val` to store minimum value
  - a stack `stk` of type `<std::pair<int, int>>`
- Constructor can be empty since I initialized member variables during declaration
- For the push function
  - if `stk` is empty our `min_val` will be `val`
  - otherwise it will be the second value associated to the top of `stk`
  - compare `min_val` and `val` and set `min_val` appropriately
  - push `{val, min_val}` on to `stk`
- For the pop function just pop `stk`
- For the top function return the first value of the top of `stk`
- For the getMin function return the second value of the top of `stk`

Took me ~10 mins, Pretty easy but I should revisit
