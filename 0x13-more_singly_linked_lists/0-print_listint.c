#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h) {
    const listint_t *current = h;
    size_t count = 0;

    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
        count++;
    }

    return count;
}

int main() {
    // Example usage
    listint_t *head = NULL;
    
    // Create nodes and add them to the linked list
    listint_t *node1 = malloc(sizeof(listint_t));
    node1->n = 10;
    node1->next = NULL;
    head = node1;
    
    listint_t *node2 = malloc(sizeof(listint_t));
    node2->n = 20;
    node2->next = NULL;
    node1->next = node2;

    // Print the linked list and get the count of nodes
    size_t node_count = print_listint(head);
    printf("Number of nodes: %lu\n", node_count);

    // Free the allocated memory
    while (head != NULL) {
        listint_t *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
