#include<bits/stdc++.h>
using namespace std;
//singly linked list
class Node{
    public:
    int data;
    Node* next;
    //constructor to initialize the node
    Node(int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
};

int main(){
    //create the head node
    Node*head=new Node(10);
    //link the second node to the first node
    head->next=new Node(20);
    //link the third node to the second node
    head->next->next=new Node(30);
    //link the fourth node to the third node
    head->next->next->next=new Node(40);
    //arrow operator is used to access the members of the class through a pointer
    //print the linked list
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}