#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int isBalanced(char exp[]) {
    for (int i = 0; i < strlen(exp); i++) {
        char ch = exp[i];

        if (ch == '(' || ch == '[' || ch == '{')
            push(ch);

        if (ch == ')' || ch == ']' || ch == '}') {
            if (top == -1)
                return 0;

            char open = pop();
            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{'))
                return 0;
        }
    }
    return top == -1;
}

int main() {
    char exp[100];

    printf("Enter expression: ");
    gets(exp);

    if (isBalanced(exp))
        printf("Expression is balanced\n");
    else
        printf("Expression is NOT balanced\n");

    return 0;
}
