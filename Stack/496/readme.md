### How I solved this
- Created variables
  - a vector `solution` of type `<int>`
  - a map `hash_map` of mapping an int to an int
  - a stack `stk` which will behave like our monotonic stack
- Iterate over `nums2`
  - while `stk` isn't empty and the top of `stk` < `nums2[i]`
    - Keep popping off `stk`
  - if at the end of popping, `stk` is empty set `hash_map[nums2[i]] = -1`
  - else set it to the top of `stk`
  - push `nums2[i]` onto `stk`, in doing this we are maintaining a monotonically decreasing stack
- Iterate over `nums1` find the corresponding values from `hash_map` and push them onto `solution`
- Return `solution`

Took me ~15 mins, had to learn about monotonic stack. Pretty cool stuff :)
