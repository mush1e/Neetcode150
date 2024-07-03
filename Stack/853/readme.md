### How I solved this
- Created variables
  - a stack `stk` of type int
  - a vector `cars` of type `<std::pair<int,int>>`
- Looped through all the positions and populated `cars` with corresponding `position` and `speed` values
- Sorted `cars` based on `position` in decending order
- Iterate through all the `cars`
  - calculated a double value for `time` and stored it
  - if the current `time` is less than the `time` on `stk` it will move with the car in front like a fleet so no need to add it
  - otherwise push `time` onto `stk`
- Return the height of `stk`
Took me ~1 day, new concept new way of thinking but now it seems fairly obvious
MUST REVISIT
