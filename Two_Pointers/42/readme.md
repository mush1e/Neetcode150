### How I solved this
- Created variables
  - `volume` to store final volume of water
  - `max_left` to store max height on the left side of an index
  - `max_right` to store max height on the right of an index
  - a vector `left_heights` to store the max left height at an index
  - a vector `right_heights` to store the max right height at an index
- initialize `left_heights[0]` to `height[0]`
- initialize `right_heights[heights.size()-1]` to `height[height.size()-1]`
- Iterate from `i=1` to `i < height.size()` and within it update and set left_heights by comparing `height[i-1]` to `max_left`
- Iterate from `i=height.size()` to `i >= 0` and within it update and set right_heights by comparing `height[i+1]` to `max_right`
- Iterate through all the heights, from `i = 0` to `i < height.size()`
  - find min of `left_height[i]` and `right_height[i]` set it to `h`
  - if `h-height[i] > 0` then add it to `volume` else add 0
 - Return final remaining volume
Took me ~15 mins, super interesting, id love to revisit
