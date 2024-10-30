#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    Node* head;

public:
    LinkedList() : head(NULL) {}

    void insertAtBeginning(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (!head){
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void insertAtPosition(int value, int position){
        if (position < 1){
            cout << "Position should >= 1.";
            return;
        }

        if (position == 1){
            head->data = value;
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp; ++i){
            temp = temp->next;
        }
        
        if (!temp){
            cout<<"List index out of range.";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtBeginning(){
        if (!head){
            cout<<"The list is empty.";
            return;
        }

        Node* nodeToDelete = head;
        head = head->next;
        delete nodeToDelete;
    }

    void deleteAtEnd(){
        if (!head){
            cout<<"The list is empty.";
            return;
        }

        if (!head->next){
            deleteAtBeginning();
            return;
        }

        Node* temp = head;
        while(temp->next->next){
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void deleteAtPosition(int position){
        if (position < 1){
            cout<<"Position should >= 1.";
            return;
        }

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp; ++i){
            temp = temp->next;
        }

        if(!temp || !temp->next){
            cout<<"List index out of range.";
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void takeDataAtBeginning(){
        if (!head){
            cout<<"The list is empty.";
            return;
        }

        cout<<head->data<<endl;
    }

    void takeDataAtEnd(){
        if (!head){
            cout<<"The list is empty.";
            return;
        }

        Node* temp = head;
        while (temp->next){
            temp = temp->next;
        }

        cout<<temp->data<<endl;;
    }

    void takeDataAtPosition(int position){
        if (!head){
            cout<<"The list is empty.";
            return;
        }

        Node* temp = head;
        for (int i = 1; i < position && temp; ++i){
            temp = temp->next;
        }

        if (!temp){
            cout<<"List index out of range.";
            return;
        }

        cout<<temp->data<<endl;
    }

    void display(){
        if (!head){
            cout<<"The list is empty.";
            return;
        }

        Node* temp = head;
        while (temp){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

int main(){
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(30);

    list.display();

    list.takeDataAtBeginning();
    list.takeDataAtEnd();
    list.takeDataAtPosition(2);
    list.takeDataAtPosition(4);

    list.deleteAtBeginning();
}