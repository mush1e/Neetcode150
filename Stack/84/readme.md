### How I solved this
- Created variables
  - a vector `left_short` to store the next index to the left of an index, whose value shorter than it
  - a vector `right_short` to store the next index to the right of an index, whose value shorter than it
  - a stack `stk` which will help me find these shorter values to the left and right of the index
  - `area` which will store the calculated area on each iteration
  - `max_area = 0` which will keep track of the largest area encountered

  - Iterated from `i=0` to `heights.size()`
  - while `stk` isnt empty or the value associated to the index on top of `stk` is greater than the value at the current index
    - set the value of `right_short[stk.top()]` to i
    - pop off `stk`
  - push `i` on `stk`
- all the elements remaining on `stk` dont have a smaller element to the right of them, set their corresponding values to `heights.size()`

- Iterated from `i=heights.size()-1` to `0`
  - while `stk` isnt empty or the value associated to the index on top of `stk` is greater than the value at the current index
    - set the value of `left_short[stk.top()]` to i
    - pop off `stk`
  - push `i` on `stk`
- all the elements remaining on `stk` dont have a smaller element to the left of them, set their corresponding values to `heights.size()`

Now the intuition for finding the area is that at any index the area is going to be width * height, where height is going to be `height[i]` and since the width of each bar is 1, the width will be all the bars between the first small bar to the left and the first small bar to the right, so thats what I did

- Iterated from `i=0` to `heights.size()`
  - found `area` by using the logic I outlined above, ie
    - `area = heights[i] * (right_short[i] - left_short[i]-1);`
  - compared `area` to `max_area`
    - if `area > max_area` then update `max_area`

- Return `max_area`

Took me ~1 day, very very fun. Loved it, should revisit
