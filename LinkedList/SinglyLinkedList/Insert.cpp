#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class linkedlist{
    Node* head;
    public:
    linkedlist(){
        head=nullptr;
    }
    void insert(int value){
        Node* newnode=new Node;
        newnode->data=value;
        newnode->next=nullptr;

        if(head==nullptr){
            head=newnode;
        }
        else{
            Node* current=head;
            while(current->next!=nullptr){
                current=current->next;
            }
            current->next=newnode;

        }
    }
    // Insert At Head
    void insertAtHead(int value){
        Node* newnode=new Node;
        newnode->data=value;
        newnode->next=head;
        head=newnode;
          cout<<"Insert at Head: ";
    }
    // Insert At tail
    void insertAtTail(int value){
        Node* newnode=new Node;
        newnode->data=value;
        newnode->next=nullptr;
        Node* current=head;
        while(current->next!=nullptr){
            current=current->next;

        }
        current->next=newnode;
        cout<<"Insert at Tail: ";
    }
    //Insert At any position
    void insertAtAny(int value,int pos){
        Node* newnode= new Node;
        newnode->data=value;
       int i=1;
       Node* current=head;
       while(i<pos-1){
        current=current->next;
        i++;
       }
       newnode->next=current->next;
       current->next=newnode;
       cout<<"Insert at Any position: ";

    }
    // Display Linked List
    void display(){
        Node* current=head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }
};
int main() {
linkedlist l;
l.insert(12);l.insert(12);l.insert(12);l.insert(12);l.insert(12);

l.display();
l.insertAtHead(13);
l.display();

l.insertAtTail(20);
l.display();

l.insertAtAny(20,3);
l.display();
    return 0;
}