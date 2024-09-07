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

};


int main(){
    
    return 0;
}