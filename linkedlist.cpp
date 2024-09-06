#include <iostream>          // Required for input/output operations
using namespace std;        // Required for using standard library

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};


// Function to create a new node
Node* newNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;      // Assign data to the new node        
    newNode->next = NULL;     // Initialize next as null
    return newNode;           // Return the new node
}

// Function to insert a new node at the beginning of the linked list
void push(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);    // Create a new node with the given data
    new_node->next = (*head_ref);          // Set the next of new node as head
    (*head_ref) = new_node;                // Move the head to point to the new node
}


// Function to print the linked list
void printList(Node* node) {
    while (node!= NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

// Driver code
int main() {
    Node* head = NULL;   // Initialize head as null
    push(&head, 20);     // Insert 20 at the beginning of the linked list
    push(&head, 4);      // Insert 4 at the beginning of the linked list
    push(&head, 15);     // Insert 15 at the beginning of the linked list
    push(&head, 85);     // Insert 85 at the beginning of the linked list
    cout << "Original Linked List: ";
    printList(head);     // Print the original linked list
    return 0;
}