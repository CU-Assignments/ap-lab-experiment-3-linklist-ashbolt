#include <iostream>

using namespace std;

// Define the structure for a node in the linked list
struct Node {
    int data;       // Data part of the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize a new node
    Node(int val) : data(val), next(nullptr) {}
};

// Function to print all elements of the linked list
void printLinkedList(Node* head) {
    Node* current = head; // Start from the head of the list
    while (current != nullptr) { // Traverse until the end of the list
        cout << current->data; // Print the current node's data
        if (current->next != nullptr) {
            cout << " "; // Print a space if there is a next node
        }
        current = current->next; // Move to the next node
    }
    cout << endl; // Print a newline at the end
}

int main() {
    // Create a linked list for demonstration: 1 -> 2 -> 3
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Print the linked list
    printLinkedList(head);

    // Clean up memory (optional, but good practice)
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current; // Free the current node
        current = nextNode; // Move to the next node
    }

    return 0;
}