#include <stdio.h>
#include <stdlib.h>
struct node {
	int exponent;
	int coefficient;
	struct node *next;
}*Polynomial;
int deleteAll() {
	struct node *ptr = Polynomial, *prevPtr;
	while (ptr != NULL) {
		prevPtr = ptr;
		ptr = ptr->next;
		free(prevPtr);
	}
	Polynomial->next = NULL;
	return (0);
}
struct node *newNode() {
	struct node *newptr = malloc(sizeof(struct node));
	if (newptr == NULL) {
		printf("Memory overflow");
		deleteAll();
		exit(0);
	}
	return (newptr);
}
int insertNodeEnd(int exponent, int coefficient) {
	struct node *newptr = newNode(), *currentNode = Polynomial;

	while (currentNode->next != NULL) {
		currentNode = currentNode->next;
	}

	newptr->next = currentNode->next;
	newptr->exponent = exponent;
	newptr->coefficient = coefficient;
	currentNode->next = newptr;
	return (0);
}
