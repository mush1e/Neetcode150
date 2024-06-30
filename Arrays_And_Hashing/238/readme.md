### How I solved this
- Created variables
  - `left_product` vector which will store the products of all numbers to the left of an index
  - `right_product` vector which will store the products of all numbers to the right of an index
  - `solution` vector which will store the product of the `left_product` and `right_product` vectors at each index

- `left_product` at the 0th index would be 1
- `right_product` at the last index would be 1
- iterate through all the `nums` (excluding the first one) and update the `left_product` vector
  - logic is `left_product[index] = left_product[index-1] * nums[index-1]`
- iterate backwards through all the `nums` (excluding the last one) and update the `right_product` vector
  - logic is `right_product[index] = right_product[index+1] * nums[index+1]`
- Iterate `nums.size()` times and update the `solution` vector as `solution[index] = left_product[index] * right_product[index] and return it`

Took me ~20 mins, SHOULD REVIST
