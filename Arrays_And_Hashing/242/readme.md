### How I solved this

- First I checked compared the sizes of both the strings
  - if they arent equal it cant be an anagram
  - else continue
- create a hash map <char, int> to store character counts
- iterate through all elements in the first string and store, update char counts
- iterate through all elements in the second string and decrement character count everytime element is encountered
- iterate through hash map and see if all character counts are 0
  - if they are not 0 then it cant be an anagram
  - else it is an anagram


  took me < 5 mins
