### How I solved this
- Create variable `max_area` to store and update highest area found, set it to 0
- iterate with `i=0` and `j=height.size()-1` while `i<j`
- set a variable `h` to the minimum of `height[i]` and `height[j]`
- find area (`h * (j-i)`) and update `max_area` if new area is greater
- if `height[i] < height[j]`
  - increment `i`
  - else decrement `j`
- return `max_area` left at the end

Took me ~5 mins, very straight forward
