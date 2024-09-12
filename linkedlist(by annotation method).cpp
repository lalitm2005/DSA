//linked list(version comment every thing)
//basic operatio in linked list:
// 1)insert at beginning(done)
// 2)insert at end(done)
// 3)insert at position(done){to implement at value insert just replace position by key will make}
//4)deleted from beginning(done)
//5)delete from end(done)
//6)delete from position(done)
//7)display(done)
#include <bits/stdc++.h>
using namespace std;
class Node{
    //creating a class from where we will make instances or objects,it contains 2 attributes or properties of class,one is storing data and other is storing address of same type of Node
//this Node object will hold a piece of data and reference to the next node in linked list
public://forgot to make data and next public
    int data;
    Node* next;
    //made constructors,inforst making data =val and next as nullpointer
    Node(int val):data(val),next(nullptr){}
    Node():data(0),next(nullptr){}
};
class LinkedList{
   //creating an linked list out of node
   //first initialising a head 
   Node* head;
   //created an pointer to a head(it is our defined stuff which we use to tell apart starting of head)
   public://this is specifier and tells who can view this data inside it {in this case all}
   //defininhttps://www.programiz.com/online-compiler/4Cc0Exsyop0nRg 2 functions insert at head and printing ll
   
   //defining a default constructor and making it head point to nullptr in beginning
   LinkedList(){
       head=nullptr;//head to pointing to nothing (nullptr),head is storing pointer value of nullptr
       //when using head as a reference to another node make sure that it is pointing to the preceding node, if it is not the case and it is pointing to null then it will cause crash
   }
   void insertAtHead(int data){//forgot to take input of data
       //1)to insert at head,we need to attach node at head if ll is empty(correction make newnodea as head)
    //   head is like a position which acan be shifted
       //2)to insert in a filled ll we insert a node to head and make the new node as head
       Node* newnode = new Node(data);//NOde* newnode creates an pointer with type Node* and then new Node(data) creates an new node objetc and its address is sorted in pointer
       //1)
       if(head==nullptr){//can be also written as if(!head)
           head=newnode;
           //if list is empty make newnode as the head
           return;//add return to exit from this condition otherwise it would be logically wrong
       }
       
       newnode->next=head;//making next node of newnode as head
       head = newnode;//making newnode as head
       
   }
   void insertAtEnd(int data){
           //making method and giving parameter as data
        //   to acheive this i have to transverse through the ll using an temp pointer
        //case it list empty
        if(head==nullptr){
            cout<<"list is empty"<<endl;
        }
        //creating an tmep pointer of type Node* and pointing it to head
        Node* temp = head;
        //also create a new node to add to list
        Node* newnode = new Node(data);
        while(temp->next!=nullptr){
            temp=temp->next;//transversal till node in front of nullptr
        }
        //making next node of that node as new node and new node's next already is nullptr as fixed in constructor
        temp->next=newnode;
      }
   void print(){
       //for printing an ll we first need an temp Node type pointer which will tranverse the ll till last element is nullptr(make temp store address of first node {head})
       Node* temp = head;//forgot to check for empty list
       if(head==nullptr){
           cout<<"empty list"<<endl;
           return;
           //obviously if the head is pointing to nullptr(storing address of noting null then the ll is empty)
       }
    //   while(temp->next!=nullptr){//this is the error in transversal in transversal we have to make condition such that node is not nullptr not check its next ones 
        while(temp!=nullptr){
           cout<<temp->data<<" ";
           temp=temp->next;//print the data in node pointed by temp and making temp store the address of next node in ll
       }
       
   }
   void deleteFromHead(){
       //to delete from head make the head the elemet next of head and first store the value of head in a Node* then delete it
       //including the case that list is empty
       if(head==nullptr){
           cout<<"list is empty"<<endl;
       }
       Node* nodetobedeleted = head;
       head=head->next;
       delete nodetobedeleted;
   }
   void deleteFromEnd(){
       //first transverse through the list and till temp->next->next is not nullptr then put value of temp->next in a new node to be deleted and make the temp point to nullptr
       Node* nodetobedeleted;
       Node* temp = head;
       //added to handle the case that the list is empty
       if(head==nullptr){
           cout<<"list is empty"<<endl;
           return;
       }
      //need to handle the case where list has only one element(i forgot to add it in original code) 
      if(head->next==nullptr){
          nodetobedeleted=head->next;
          head=nullptr;
          delete nodetobedeleted;
          return;
      }
       while(temp->next->next!=nullptr){//Mistake: The while loop condition while (temp->next->next != nullptr) assumes that the list has at least two nodes. If the list has exactly one node, this condition will cause a segmentation fault because temp->next will be nullptr.
// Fix: Add a check to handle the case where the list has only one node.
            temp=temp->next;
       }
      nodetobedeleted=temp->next;
      temp->next=temp->next->next; 
    
    //   delete temp->next;//mistake i have to delete temp->next not temp that's why error
    //   Mistake: delete temp->next is incorrect. You should delete the node stored in nodetobedeleted, which is the actual node to be deleted.
// Fix: Use delete nodetobedeleted to free the memory of the node that was actually removed.
       delete nodetobedeleted;
   }
   void deleteFromPosition(int position){
       if(position==1){
           deleteFromHead();
           return;//returning to discontinue flow of code if the condition is met
        }
        if(position<=0){
            cout<<"invalid position"<<endl;
            return;//used in voif function to exit from function early
        }
        Node* nodetobedeleted;//make an node to make its value as the address of node to be deleted and later delete that address in turn freeing memory to avoid memory leak
        Node* temp=head;//transversal of list
        int count=1;
        while(temp!=nullptr && count<position-1){
            temp=temp->next;
            count++;
        }
        
        nodetobedeleted=temp->next;//updated value of nodetobedeleted with address of node we want to delete
      temp->next=temp->next->next; //makeing next of temp equal to next of node to be deleted(temp->next) or in computer form we are assigning address of nodetobedeleted by address of node after that (very clever!!)
    
    //   delete temp->next;//mistake i have to delete temp->next not temp that's why error
    //the above line should be deleted
       delete nodetobedeleted;
   }
   void deleteFromValue(int key){
       WRITE CODE FROM HERE
   }
   void insertAtPosition(int data,int position){
        //obviously take data at insert operations and also position
        //case if list empty insert at head by making a new node
        //if position is 1 or first node redirect to inserAtBeginning fuction
        if(position==1){
           insertAtHead(data);
           return;//returning to discontinue flow of code if the condition is met
        }
        if(position<=0){
            cout<<"invalid position"<<endl;
            return;//used in voif function to exit from function early
        }
        Node* temp = head;//created an temp variable which stores the address of the head which i will use in traveral of the list
        Node* newnode = new Node(data);//allocated memory to the object Node named newnode
        int count=1;//creating an counter to count the number of node passed will be used in the list for insertion
        // while(temp!=nullptr && count==position){ chatgpt suggested that i should transverse it till position -1 as to instill at 3 we need to go to 2nd node for doing our next assignment
        while(temp!=nullptr && count<position-1){//if i give it position <=0 till will skip this condition as for position=0 count<-1 is always false and temp will always point to head,inserting the newnode right next to head to hadle this need to make a new condition
            temp=temp->next;
            count++;
            //here i am shifting temp or iterating by setting its next value as its present one and updating the value of the count
        }
        //after getting outside of the while loop it is confirmed that the given node is nullptr and has the specified position
        
        //need to make condition if temp==nullptr or position not found
        //need to make condition if we enter an invalid position like <=0
        //in this stage if i enter an invalid position i will not case error simple print the list why
        if(temp==nullptr){
            cout<<"position not found"<<endl;
            //need to deallocate memory to avoid memory leak and return the head
            //cannot return head in this void function i have tries it by chaing return type to Node* but it is not happening
            delete  newnode;
            return;
            
        }
        
        //making the next node of temp as newnode and next of new node as the next of temp
        // temp->next=newnode;//making node next of temp as newnode
        // newnode->next=temp->next;//making next of new node as next of temp
        
        //the above line will cause trouble as the ordering is incorrect i should first make the next of newnode as next of temp,then change the vlaue of next of temp as newnode otherwise it is logically incorrect(newnode ka next new node hain!?)
        newnode->next=temp->next;
        temp->next=newnode;
        //if position is ending then also redirect to insert at end function
        //if position between use a counter to check for disired position and make its next as newnode and newnoes next is its next node
        //if position not found print not found
        //need to check two condition in traversal first if temp->next is nullptr and if counter is equal to position
    }
    
};
int main(){
    //adding node to Linkedlist and data
    //first making an object of LinkedList named list
    LinkedList list;
    //using methods to add at head
    list.insertAtHead(3);
    list.insertAtHead(4);
    list.insertAtHead(5);
    list.insertAtHead(6);
    list.insertAtHead(7);
    list.insertAtHead(8);
    list.insertAtEnd(10);
     list.insertAtPosition(99,6);//giving unexpected response 99 8 99 7 6 5 4 3 10 i think i didm't put return statement in head one;
    //now it is giving 99 8 7 6 5 4 3 10 for list.insertAtPosition(99,2); what if i put posiiton ==3? not giving the desired response (old output)
    //it is giving same response for all position?99 8 7 6 5 4 3 10 
    //what if i give it bizzare position like 100?;D then also same output
    //i have not put  == sign in position ==1(facepalm)
    //now it is giving 8 99 7 6 5 4 3 10  for all position
    //after chatgpt it is working ,it told to transverse till count<position-1
    //i can write list.(method of linked list in next line also like)
    // list.
    // method
    list.deleteFromHead();//should delete 8(fingers crossed) yaay! deleted successfully
    list.deleteFromEnd();//should delete 10,aaah.. deleted 10 but giving garbage value at temp->prev before 7 6 5 4 99 3 10 after 7 6 5 4 99 23842640 3 by mistake i deleted temp not temp->next;
    list.deleteFromPosition(3);//before:7 6 5 4 99 3 after:7 6 15933296 4 ,something is seriously wrong in this code
    //working after removing the line that deletes temp->next;
    cout<<"list of elements:"<<endl;
    //printing the list
    list.print();
    cout<<endl;
    //there is an error in implementation of printing it is not printing node which is at last
    
    return 0;//very very important ;D 
}