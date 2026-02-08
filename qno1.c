#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Push function */
void push(char ch) {
    stack[++top] = ch;
}

/* Pop function */
char pop() {
    return stack[top--];
}

/* Check matching pair */
int isMatching(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

/* Check balanced parentheses */
int isBalanced(char expr[]) {
    for (int i = 0; i < strlen(expr); i++) {

        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1)
                return 0;

            char open = pop();
            if (!isMatching(open, ch))
                return 0;
        }
    }
    return (top == -1);
}

int main() {
    char expr[100];

    printf("Enter expression: ");
    gets(expr);

    if (isBalanced(expr))
        printf("Expression is BALANCED\n");
    else
        printf("Expression is NOT BALANCED\n");

    return 0;
}
