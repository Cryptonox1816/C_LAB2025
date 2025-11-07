#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node *next;
};

// Function to print linked list
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Create initial nodes
    struct Node *head = NULL, *second = NULL, *third = NULL, *fourth = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    // Assign data
    head->data = 10; head->next = second;
    second->data = 20; second->next = third;
    third->data = 30; third->next = fourth;
    fourth->data = 40; fourth->next = NULL;

    printf("Original Linked List:\n");
    printList(head);

    // Insert new node after second (middle)
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 25;

    // Adjust pointers
    newNode->next = second->next;  // newNode points to third
    second->next = newNode;        // second points to newNode

    printf("\nLinked List after inserting 25 in the middle:\n");
    printList(head);

    // Free memory
    free(head);
    free(second);
    free(newNode);
    free(third);
    free(fourth);

    return 0;
}
