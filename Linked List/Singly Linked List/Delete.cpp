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
    void DeleteAtHead(){
        Node* current=head;
        head=head->next;
        delete current;
    }
    void DeleteByValue(int value){
        Node* current=head;
        Node* pre=nullptr;
        while(current!=nullptr){
            if(current->data==value){
                if(pre==nullptr){
                    head=current->next;
                }
                else{
                    pre->next=current->next;
                }
                delete current;
            }
            pre=current;
            current=current->next;
        }

    }
    void DeleteByPos(int pos){
        Node* current=head;
        Node* pre=nullptr;
        int i=1;
        if(pos==1){
            head=current->next;
        }
        else{
            while(i<pos){
            pre=current;
            current=current->next;
            i++;

        }
        pre->next=current->next;
        }
        delete current;
    }

    void DeleteAttail(){
        Node* current=head;
        Node* pre=nullptr;

        while(current->next!=nullptr){
            pre=current;
            current=current->next;
        }
        pre->next=nullptr;
        delete current;
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
l.insert(12);l.insert(13);l.insert(14);l.insert(15);l.insert(16);
l.display();

l.DeleteAtHead();
l.display();

l.DeleteByValue(13);
l.display();

// l.DeleteByValue(16);
// l.display();
l.DeleteByPos(1);
l.display();

l.DeleteAttail();
l.display();
    return 0;




}
