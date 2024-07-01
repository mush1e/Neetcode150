### How I solved this
- Created variables
  - `op1` and `op2` to store the 2 operands
  - a stack `stk` to store all the values and their computations
- Iterate through all the `tokens`
  - if `token` is a number (+ve or -ve) add it to `stk`
  - else
    - extract the top 2 values from `stk` and store them in `op1` and `op2`
    - check the `token`
      - if `+` add `op1` and `op2` and push it on the `stk`
      - if `-` subtract `op1` and `op2` and push it on the `stk`
      - if `*` multiply `op1` and `op2` and push it on the `stk`
      - if `/` divide `op1` and `op2` and push it on the `stk`
- Last value on `stk` will be our solution, return it

Took ~ 10mins, pretty easy, remember op2 comes before op1 :)
