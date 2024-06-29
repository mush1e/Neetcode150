### How I solved this

- first created variables
  - an unordered map `hash_map` mapping an int (values) to another int (number of occurances)
  - a vector `sorted_list` of type `std::pair<int, int>` to store pairs of values and number of occurances so I can sort them easily
  - a vector `solution` of type int to store our final solutio vector

- iterated through the vector `nums` and populated `hash_map` appropriately
- populated `sorted_list` from `hash_map`
- sorted our `sorted_list` vector inplace using the sort function and a lambda function within it in decreasing order
- populated our `solution` vector with the first element of our `std::pair` for the first `k` elements in the `sorted_list` vector and returned it

This took me ~20 mins - Should revisit
