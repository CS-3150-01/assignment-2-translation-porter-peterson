#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *Next;
};

struct Node* head;
struct Node* tail;

void addNode(int data) {
    // Create a new node
    struct Node* currentNode;
    currentNode = (struct Node*)malloc(sizeof(struct Node*));
    currentNode->data = data;
    if (head == NULL) {
        currentNode -> Next = NULL;
        head = currentNode;
        tail = currentNode;
    } else {
        currentNode -> Next = NULL;
        tail->Next = currentNode;
        tail = currentNode;
    }
    
}

void display() {
    struct Node* currentNode;
    currentNode = head;
    if (currentNode == NULL) {
        printf("%s", "List is Empty!");
      } else {
        printf("%s", "Nodes of singly linked list: \n");
        while (currentNode != NULL) {
            printf("%d ", currentNode->data);
            currentNode = currentNode->Next;
        }
    }
}

int main() {

    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    display();

    return 0;
}