#include<iostream>
using namespace std;
struct node{
   int data;
   struct node *next;
};
void prinlist(struct node *n){
  while(n!= NULL){
  cout<<n->data;
  n= n->next;
  }
}
int main(){
   struct node *head = NULL;
   struct node *second = NULL;
   struct node *third = NULL;
   head = (struct node *)malloc(sizeof(struct node));
   second = (struct node *)malloc(sizeof(struct node));
   third = (struct node *)malloc(sizeof(struct node));
   cout<<"enter first element"<<endl;
   cin>>head->data;
   head->next = second;
   second ->data = 2;
   second->next = third;
   third -> data = 3;
   third ->next = NULL;
   prinlist(head);
   return 0;

}
