#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void Insertathead(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void Insertattail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertatposition(Node* &head, int position, int d){
     
    if(position == 1){
        Insertathead(head,d);
        return;
    }
     Node* temp = head;
     int cnt = 1;
     while(cnt < position - 1){
        temp = temp->next;
        cnt++;

     }

     Node* nodetoinsert = new Node(d);

     nodetoinsert -> next = temp->next;

     temp -> next = nodetoinsert;
}

int main(){
    
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;


    Node* head = node1;
    Node* tail = node1;
    print(head);

    Insertathead(head,12);

    print(head);

    Insertattail(tail,17);

    print(head);

    Insertattail(tail,18);

    print(head);

    insertatposition(head,1,45);
    print(head);
    


    return 0;
}