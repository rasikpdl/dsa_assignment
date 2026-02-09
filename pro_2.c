#include <stdio.h>
#include <ctype.h>

char stack[50];
int top = -1;

void push(char x) { stack[++top] = x; }
char pop() { return stack[top--]; }

int priority(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return 0;
}

int main() {
    char exp[50];
    printf("Enter infix expression: ");
    scanf("%s", exp);

    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];

        if (isalnum(ch))
            printf("%c", ch);
        else if (ch == '(')
            push(ch);
        else if (ch == ')') {
            while (stack[top] != '(')
                printf("%c", pop());
            pop();
        } else {
            while (priority(stack[top]) >= priority(ch))
                printf("%c", pop());
            push(ch);
        }
    }

    while (top != -1)
        printf("%c", pop());

    return 0;
}
