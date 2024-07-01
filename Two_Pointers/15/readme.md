### How I solved this
- Create Variables
  - A vector `solution` of type `<std::vector<int>>` which will hold our final solution
  - A set `hash_set` of type `<std::vector<int>>` to help us avoid duplicates
- Sort our vector `nums`
- Iterate over `nums` from `i=0` to `i < nums.size()`
  - Iterate with `j = i + 1` and `k = nums.size()-1` while `j < k`
  - if `nums[i] + nums[j] + nums[j] = 0` add the triplet to our `hash_set`, increment `j` and decrement `k`
  - else if the sum of `nums[i]`, `nums[j]` and `nums[k]` is greater than 0
    - decrement `k`
    - else increment `j`
- populate our `solution` vector from our `hash_set` and return it

took me ~ 20 mins, I knew the basic concept but fumbled the implementation a bit, should revisit
