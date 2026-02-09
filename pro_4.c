#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

void insertAfter(struct node *prevNode, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = prevNode->next;
    newNode->prev = prevNode;
    prevNode->next = newNode;
}

void deleteNode(struct node **head, struct node *del) {
    if (*head == del)
        *head = del->next;
    if (del->next)
        del->next->prev = del->prev;
    if (del->prev)
        del->prev->next = del->next;
    free(del);
}

int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->prev = head->next = NULL;

    insertAfter(head, 20);
    deleteNode(&head, head);

    return 0;
}
