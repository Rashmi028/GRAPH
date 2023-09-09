
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void push(struct Node ** ptr, int new_data)
{
	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*ptr);
	(*ptr) = new_node;
}

void printList(struct Node *ptr1)
{
	struct Node *temp = ptr1;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void merge(struct Node *ptr2, struct Node **ptr3)
{
	struct Node *ptr2_curr = ptr2, *ptr3_curr = *ptr3;
	struct Node *ptr2_next, *ptr3_next;
	while (ptr2_curr != NULL && ptr3_curr != NULL)
	{
		ptr2_next = ptr2_curr->next;
		ptr3_next = ptr3_curr->next;

		ptr3_curr->next = ptr2_next; 
		ptr2_curr->next = ptr3_curr; 

		// Update current pointers for next iteration
		ptr2_curr = ptr2_next;
		ptr3_curr = ptr3_next;
	}

	*ptr3 = ptr3_curr; // Update head pointer of second list
}

int main()
{
	struct Node *ptr2 = NULL, *ptr3 = NULL;
	push(&ptr2, 10);
	push(&ptr2, 8);
	push(&ptr2, 11);
	push(&ptr2, 4);
	push(&ptr2, 2);
	printf("First Linked List:\n");
	printList(ptr2);
    push(&ptr3, 3);
	push(&ptr3, 9);
	push(&ptr3, 7);
	push(&ptr3, 5);
	push(&ptr3, 2);
	push(&ptr3, 1);
	printf("Second Linked List:\n");
	printList(ptr3);

	merge(ptr2, &ptr3);

	printf("Merged linked list:\n");
	printList(ptr2);

	getchar();
	return 0;
}