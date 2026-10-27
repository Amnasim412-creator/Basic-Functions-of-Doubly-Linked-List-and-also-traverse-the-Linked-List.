#include <iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node* prev;
public:
Node(int val ){
data= val;
next = prev = NULL;
}
};

class doubly{
public:
Node* head;
Node* tail;

doubly() {
    head = tail = NULL;
}
void traves(){
     Node* temp=head;
    while(temp!=NULL){

        cout<<temp->data;
        temp=temp->next;
        cout<<endl;
    }

}
void push_front(int val){
Node* newNode = new Node(val);

if (head == NULL){
    head = tail = newNode;
}
else{
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}
}
void push_back(int val){
    Node* newNode = new Node(val);
    if (head == NULL){
        head = tail = newNode;
    }else{
    tail->next = newNode;
    newNode->prev = tail;
    tail=newNode;
    }
}
void pop_front(){

    Node* temp = head;
    if(head!=NULL){
    head=head->next ;
    head->prev = NULL;
    temp->next = NULL;
    delete(temp);}
}
void pop_back(){
if(head == NULL){
    cout<<"Empty!";
    return;
}
Node* temp= tail;
tail = tail->prev;
tail->next=NULL;
temp->prev = NULL;
delete(temp);

}
void print(){
Node* temp =head;
while (temp!=NULL){
    cout<<temp->data <<" <> ";
    temp = temp->next;

}
cout<<endl;
}
};


int main(){

    doubly d;
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(-1);
    cout<<"Using push front and back functions = ";
    d.print();
    cout<<endl;
    
    d.pop_front();
    cout<<"Using pop Front deletion = ";
    d.print();
    cout<<endl;
    
    d.pop_back();
    cout<<"Using pop Back Function delete from front =";
    d.print();


    d.traves();
     d.print();
return 0 ;
}
