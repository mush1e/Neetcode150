### How I solved this
- Iterate over all the `numbers` with `i = 0` and `j = numbers.size()-1`
- Iterate till `i < j`
- if `numbers[i] + numbers[j]` is our target return `{i, j}`
- otherwise if sum of `numbers[i]` and `numbers[j]` is greater than target, decrement `j` by one
- else increment `i` by one

took me ~ 2 mins, idk why this is a medium
