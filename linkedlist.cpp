#include<bits/stdc++.h>
using namespace std;

class Node{
        public:
        int data;
        Node* next;
        // defined a class node
        // defining a constructor
        Node(int val){
            data=val;
            next=nullptr;
        }
        
    };
class linkedlist{
    private:
    Node* head;
    // creating a head pointer
    public:
    // creating a constructor for empty linkedlist
    linkedlist(){
        // this is an empty linked list with head pointing towards nullptr
        head=nullptr;
    }
    // creating a function to add node at the end of the linkedlist
    void insertAtEnd(int value){
        // 1)transversal at the end of ll
        // 2)let last node point to new Node
        // 3)let new node point to nullptr
        
        Node* newnode = new Node(value);//allocating new node dynamic allocation
        // what if it is empty ll?{let head point to newnode and newnode to nullptr[already does that]}
        if(head==nullptr){
            head=newnode;
            return;
        }
        // tranversing the linkedlist
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
            // transversing till last before nullptr
        }
        // setting temp->next as newnode
        temp->next=newnode;
    }
    // insert at beginning
    void insertAtBeginning(int value){
        Node* newnode = new Node(value);
            newnode->next=head;
            head=newnode;
    }
    //to delete a node
    void deleteNode(int value){
        if(head==nullptr){
            cout<<"linkedlist is empty"<<endl;
            return;
        }
        //if head to be deleted 
        if(head->data==value){
            Node* temp=head;//store head node
            head=head->next;//making next node as head 
            delete temp;//deleting temp
            return;
        }
        //if end to be deleted
        Node* temp=head;
        while(temp->next!=nullptr&&temp->next->data!=value){
            temp=temp->next;
        }
        //if the node is nullptr then(value not found)
        if(temp->next==nullptr){
            cout<<"value not found"<<endl;
        }
        //node delete
        Node* nodeToBeDeleted=temp->next;
        delete nodeToBeDeleted;
        return;
    }

};


int main(){
    
    return 0;
}