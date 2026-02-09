# Question 2 Documentation  
Infix to Postfix Conversion Using Stack

---

## Stack Structure
- Stack implemented using a character array
- Used to store operators temporarily
- Follows LIFO principle

---

## Basic Stack Functions
- `push(char x)`  
  Pushes operator onto stack
- `pop()`  
  Pops operator from stack

---

## Helper Functions
- `priority(char x)`  
  Returns operator precedence  
  `(` → lowest  
  `+ -` → medium  
  `* /` → highest

---

## Main Logic
- Traverse infix expression character by character
- Operands are printed directly
- Operators are pushed based on precedence
- Parentheses handled separately
- Remaining operators popped at end

---

## Main Method Organization
- Read infix expression from user
- Convert infix to postfix
- Display postfix expression
- End program

---

## Sample Output
Enter infix expression: a+bc
Postfix expression: abc+