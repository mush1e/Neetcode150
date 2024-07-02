### How I solved this
- I created variables
  - a vector `solution` of type `<int>` to store the final solution
  - a stack `stk` of type `<int>` to store indices of temperatures
- Iterate over `i=0` to `i < temperatures.size()`
  - while `stk` isnt empty and the top of `stk` is less than our current value
    - set `solution[stk.top()]` to be `i - stk.top()`
    - pop the topmost element from `stk`
  - push current index
- Finally return `solution`

Took me > 20 mins this concept is new to me ill practice some more problems with this pattern
