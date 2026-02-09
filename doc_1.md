# Question 1 Documentation  
Balanced Parentheses Checker Using Stack

---

## Stack Structure
- Uses an array `stack[MAX]` to store opening brackets
- Integer variable `top` points to the top element
- When stack is empty, `top = -1`
- Maximum stack size is 100

---

## Basic Stack Functions
- `push(char c)`  
  Adds an opening bracket to the stack
- `pop()`  
  Removes and returns the top element from the stack
- `isEmpty()`  
  Checks whether the stack is empty

---

## Helper Functions
- `isOpeningBracket(char c)`  
  Returns true if character is `(`, `{`, or `[`
- `isClosingBracket(char c)`  
  Returns true if character is `)`, `}`, or `]`
- `isMatchingPair(char open, char close)`  
  Checks whether opening and closing brackets match correctly

---

## Main Logic Function
- `isBalanced(char exp[])`
  - Traverses each character of the expression
  - Pushes opening brackets onto the stack
  - Pops and compares when a closing bracket is found
  - Returns true only if stack is empty at the end

---

## Main Method Organization
- Print program header
- Define three test expressions:
  - `a + (b - c) * (d`
  - `m + [a - b * (c + d * {m)]`
  - `a + (b - c)`
- Check each expression using `isBalanced()`
- Display whether expression is balanced or not
- End program

---

## Sample Output
BALANCED PARENTHESES CHECKER

Expression: a + (b - c) * (d
Result: NOT BALANCED

Expression: m + [a - b * (c + d * {m)]
Result: NOT BALANCED

Expression: a + (b - c)
Result: BALANCED