# Program 1: Balanced Parentheses Using Stack

## Data Structure Used
A stack is used to store opening brackets encountered in the expression. The stack follows the LIFO (Last In First Out) principle, which is ideal for matching parentheses.

## Functions Implemented
- `push(char c)`  
  Pushes an opening bracket onto the stack.
- `pop()`  
  Removes and returns the top element from the stack.
- `isBalanced(char exp[])`  
  Checks whether the given expression has balanced parentheses using stack operations.

## main() Overview
The main function takes a mathematical expression as input from the user and calls the `isBalanced()` function to determine whether the parentheses are balanced or not.

