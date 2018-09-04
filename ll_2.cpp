#include<iostream>
using namespace std;
struct node{
    int data;
    struct  node* next;
};
void printlist(struct node *n){
      while(n!= NULL){
  cout<<n->data;
  n= n->next;
  }
}
void push(struct node**head_ref,int new_data){
  struct node*new_node =(struct node*)malloc(sizeof(struct node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void deleteNode(struct node**head_ref,int key){

    struct node*temp = *head_ref,*prev;
    if(temp!=NULL && temp->data == key){
       *head_ref = temp->next;
       free(temp);
       return;
    }

    while(temp!=NULL && temp->data!=key){
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL){
       return;
    }

    prev->next = temp->next;
    free(temp);

}
int main()
{
  struct node*head=NULL;
  push(&head, 7);
  push(&head, 6);
  push(&head, 2);
  push(&head, 9);

  puts("create a linkedlist");
  printlist(head);

  cout<<" "<<endl;
 int g;
 cout<<"number u want to delete"<<endl;
 cin>>g;
  deleteNode(&head,g);
  cout<<"linked list after deletion of 1"<<endl;
  printlist(head);
  return 0;
}
