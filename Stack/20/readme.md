### How I solved this
- Created a Stack `stk` of type `<char>` to store the order of parenthesis
- Iterated through each character `ch` of string `s`
  - used a switch case for `cs`
    - in cases `(` or `{` or `[` push `ch` to `stk`
    - in the case `)` if top of `stk` isnt `(` or `stk` is empty return `false`
    - in the case `}` if top of `stk` isnt `{` or `stk` is empty return `false`
    - in the case `]` if top of `stk` isnt `[` or `stk` is empty return `false`
- Check if `stk` is empty after the loop, if it isnt return `false`
- At the end return `true`
Took me ~2 mins, pretty easy
