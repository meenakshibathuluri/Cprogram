#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at the beginning.\n", value);
}
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    printf("Deleted %d from the beginning.\n", temp->data);
    free(temp); // Free allocated memory
}
void displayList() {
    if (head == NULL) {
        printf("The list is empty: NULL\n");
        return;
    }
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice, value;
    while (1) {
        printf("\n--- Singly Linked List Operations ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Delete from Beginning\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 2:
                deleteFromBeginning();
                break;
            case 3:
                displayList();
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
