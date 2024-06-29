### How I solved this

- Created initial variables which are
  - a `temp` string variable to store a sorted `std::string`
  - a vector of type `<std::vector<std::string>>` called `solution` which stores the string vectors to be returned
  - a hash map mapping `std::string`s to a vector of `std::string`s

- Iterated through each string in the provided vector of strings
- found the sorted value of each string and stored it in `temp`
- updated our `hash_map` to append the current string for the `temp` key

- Iterated through the `hash_map` and pushed each of the values to the `solution` vector

This took me ~20 mins, I should revisit this
