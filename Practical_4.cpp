#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct Node{
int info;
struct Node *next;
struct Node *prev;
}*start;
class Double_Linked_List{
public:
//Method to create a node for the first time & To Insert Element at last
void Create_List(int value){
struct Node *s,*temp;
temp=new (struct Node);
temp->info = value;
temp->next=NULL;
if(start == NULL){
temp->prev=NULL;
start=temp;
}
else{
s=start;
while(s->next!=NULL){
s=s->next;
}
s->next= temp;
temp->prev=s;
}
}
//Method To Display The List
void Display_List(){
struct Node *s;
if(start==NULL){
cout<<"\nList is Empty";
}
else{
s =start;
cout<<"\nElements in linked list are \n";
while(s!=NULL){
cout<<s->info<<"-->";
s=s->next;
}
cout<<"NULL\n";
}
}
void Insert_At_Begining(){
if(start==NULL){
cout<<"\nList is Empty";
return;
}else{
int element;
cout<<"\nEnter Element\n";
cin>>element;
struct Node *temp;
temp = new (struct Node);
temp->prev=NULL;
temp->info=element;
temp->next=start;
start->prev=temp;
start=temp;
cout<<"\nElement is Added";
}
}
void Insert_After(int value,int position){
if(start==NULL){
cout<<"\nList is empty";
return ;
}
else{
struct Node *temp,*s;
int i;
s=start;
for(i=0;i<position-1;i++){
s=s->next;
if(s==NULL){
cout<<"\nIn Linked list less than "<<position<<" elements.";
return;
}
}
temp=new (struct Node);
temp->info=value;
if(s->next==NULL){
s->next=temp;
temp->next=NULL;
temp->prev=s;
}
else{
temp->next=s->next;
temp->next->prev=temp;
s->next=temp;
temp->prev=s;
}
cout<<"\nElement is Added";
}
}
void Delete_First(){
struct Node *temp,*s;
temp=start;
start=start->next;
start->prev=NULL;
cout<<"\nElement is Deleted\n";
free(temp);
}
void Delete_Last(){
struct Node *temp,*s;
temp=start;
while(temp->next->next!=NULL){
temp=temp->next;
}
s=temp->next;
temp->next=NULL;
free(s);
cout<<"\nElement is Deleted\n";
}
};


int main(){
int ch,element,position;
Double_Linked_List dbl;
while(1){
cout<<"\n1 For Create Node\n2 For Insert At Begining\n3 Insert After Position\n4 For Delete Begining\n5 For Delete Last\n6 For Display\n";
cin>>ch;
switch(ch){
case 1:
cout<<"\nEnter Element\n";
cin>>element;
dbl.Create_List(element);
cout<<"\nNode is created";
break;
case 2:
dbl.Insert_At_Begining();
break;
case 3:
cout<<"\nEnter Element\n";
cin>>element;
cout<<"\nENter Position\n";
cin>>position;
dbl.Insert_After(element,position);
break;
case 4:
dbl.Delete_First();
break;
case 5:
dbl.Delete_Last();
break;
case 6:
dbl.Display_List();
break;
}
}
return 0;
}
