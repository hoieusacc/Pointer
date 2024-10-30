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
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(int value, int position){
        if (position < 1){
            cout<<"Position should be >= 1." << endl;
            return;
        }
        if (position == 1){
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp; ++i){
            temp = temp->next;
        }

        if (!temp){
            cout << "Position out of range." << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteFromBeginning(){
        if (!head){
            cout<<"The list is empty.";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd(){
        if (!head){
            cout<<"The list is empty.";
            return;
        }

        if (!head->next){
            delete head;
            return;
        }

        Node* temp = head;
        while (temp->next->next){
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void deletePosition(int position){
        if (position < 1){
            cout<<"Position should >= 1";
            return;
        }

        if (position == 1){
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp; ++i){
            temp = temp->next;
        }

        if (!temp || !temp->next){
            cout<<"List index out of range.";
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void display(){
        if (!head){
            cout<<"The list is empty.";
            return;
        }

        Node* temp;
        while (temp){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
    }

};

int main(){
    LinkedList list;
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);

    list.display();
}