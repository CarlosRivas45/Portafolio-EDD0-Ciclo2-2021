#include <iostream>
using namespace std;
struct node {
int data;
struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
void Insert(int val) {
if (rear == NULL) {
rear = new node;
rear->next = NULL;
rear->data = val;
front = rear;
     } else {
temp=new node;
rear->next = temp;
temp->data = val;
temp->next = NULL;
rear = temp;
   }
}
void Delete() {
temp = front;
if (front == NULL) {
cout<<"Cola vacia!!"<<endl; } else if (temp->next != NULL) {
temp = temp->next;
cout<<"Elemento eliminado : "<<front->data<<endl;
free(front);
front = temp;
   } else {
cout<<"Elemento eliminado : "<<front->data<<endl;
free(front);
front = NULL;
rear = NULL;
   }
}
void Display() {
temp = front;
if ((front == NULL) && (rear == NULL)) {
cout<<"Cola vacia"<<endl;
return;
   }
while (temp != NULL) {
cout<<temp->data<<" "; temp = temp->next;
   }
cout<<endl;
}
int main() {
    
cout<<"Cola creada: "<<endl;
Insert(1);
Insert(3);
Insert(5);
Insert(7);
Insert(9);
Display();
Delete();
cout<<"Cola depues de eliminar elemento "<<endl;
Display();
       
return 0;
}
