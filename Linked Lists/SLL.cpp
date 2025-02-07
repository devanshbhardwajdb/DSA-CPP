#include <bits/stdc++.h>
using namespace std;

// Define the node structure
struct Node
{
    int data;
    Node *next;
};

// Create a new node with a given value
Node *createNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void insertEmpty(Node **head, int value)
{
    if (*head == nullptr)
    {
        *head = createNode(value);
    }
    else
    {
        cout << "List is not empty!" << endl;
    }
}

void insertBeginning(Node **head, int value)
{
    Node *newNode = createNode(value); // Create a new node with the given value
    newNode->next = *head;             // Point new node's next to current head
    *head = newNode;                   // Update head to new node
}

void insertEnd(Node **head, int value)
{
    Node *newNode = createNode(value); // Create a new node
    if (*head == nullptr)
    { // If list is empty, new node becomes head
        *head = newNode;
    }
    else
    {
        Node *temp = *head;
        while (temp->next != nullptr)
        {
            // Traverse to the last node
            temp = temp->next;
        }
        temp->next = newNode; // Link last node to new node
    }
}

void insertAfter(Node *head, int pos, int value)
{
    if (head == nullptr)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *temp = head;
    // Traverse to the specified position
    for (int i = 0; i < pos; i++)
    {
        if (temp == nullptr)
        { // Check if position is valid
            cout << "Position out of bounds" << endl;
            return;
        }
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "Position out of bounds" << endl;
        return;
    }
    Node *newNode = createNode(value);
    newNode->next = temp->next; // Link new node to the following node
    temp->next = newNode;       // Link current node to new node
}

void deleteFirst(Node **head)
{
    if (*head == nullptr)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *temp = *head;    // Save the current head
    *head = (*head)->next; // Move head to the next node
    delete temp;           // Free memory of the old head
}

void deleteNode(Node **head, int value)
{
    if (*head == nullptr)
    {
        cout << "List is empty!" << endl;
        return;
    }
    // Special case: if head node holds the value
    if ((*head)->data == value)
    {
        Node *temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }
    Node *curr = *head;
    Node *prev = nullptr;
    while (curr != nullptr && curr->data != value)
    { // Search for the value
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr)
    { // Value not found
        cout << "Node not found!" << endl;
        return;
    }
    prev->next = curr->next; // Link previous node with next node
    delete curr;             // Free memory of the node to be deleted
}

void traverse(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node *search(Node *head, int value)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == value)
            return temp; // Node found
        temp = temp->next;
    }
    return nullptr; // Node not found
}

int countNodes(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void sortList(Node* head) {
    if (head == nullptr)
        return;
    bool swapped;
    do {
        swapped = false;
        Node* current = head;
        while (current->next != nullptr) {
            if (current->data > current->next->data) {
                // Swap data between nodes
                int tempVal = current->data;
                current->data = current->next->data;
                current->next->data = tempVal;
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}


int main()
{
    Node *head = nullptr;

    insertEmpty(&head, 10);
    insertBeginning(&head, 5);
    insertEnd(&head, 20);
    insertAfter(head, 0, 15);
    deleteFirst(&head);
    deleteNode(&head, 20);
    traverse(head);

    Node *found = search(head, 10);
    if (found)
        cout << "Node with value 10 found." << endl;
    else
        cout << "Node with value 10 not found." << endl;

    cout << "Count of nodes: " << countNodes(head) << endl;
    
    insertEnd(&head, 0);
    insertEnd(&head, 5);
    insertEnd(&head, 9);

    traverse(head); 
    sortList(head);
    traverse(head); 

    return 0;
}