#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void reversePrint(struct node *head) {
    if (head == NULL)
        return;
    reversePrint(head->next);
    printf("%d ", head->data);
}

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, data;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = NULL;

        if (head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("Reverse traversal: ");
    reversePrint(head);

    return 0;
}
