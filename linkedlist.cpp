#include<bits/stdc++.h>
using namespace std;
  
// Class representing a node in a singly linked list of strings
class StringNode{
    private:
    string elem; // Data element stored in the node
    StringNode* next; // Pointer to the next node in the list
  
    // Friend class to allow access to private members
    friend class StringLinkedList;
};
 
// Class representing a singly linked list of strings
class StringLinkedList{
    public:
    // Constructor
    StringLinkedList();
    // Destructor
    ~StringLinkedList();
    // Check if the list is empty
    bool empty() const;
    // Get the element at the front of the list
    const string& front() const;
    // Add an element to the front of the list
    void addFront(const string& e);
    // Remove the element from the front of the list
    void removeFront();
    private:
    StringNode* head; // Pointer to the head of the list
};
  
// Main function
int main(){
    return 0;
}