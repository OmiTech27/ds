#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int queue[100], n, first = - 1, last = - 1;
void Insert()
{
int val;
if (last == n - 1)
cout<<"Queue Overflow"<<endl;
else
{
if (first == - 1)
first = 0;
cout<<"Insert the element in queue : "<<endl;
cin>>val;
last++;
queue[last] = val;
}
}
void Delete()
{
if (first == - 1 || first > last)
{
cout<<"Queue Underflow ";
return ;
}
else
{
cout<<"Element deleted from queue is : "<< queue[first] <<endl;
first++;;
}
}
void Display()
{
if (first == - 1)
cout<<"Queue is empty"<<endl;
else
{
cout<<"Queue elements are : ";
for (int i = first; i <= last; i++)
cout<<queue[i]<<" ";
cout<<endl;
}
}
int main()
{
int ch;
cout<<"\nEnter Size of Array ";
cin>>n;
while(1)
{
cout<<"1) Insert element to queue"<<endl;
cout<<"2) Delete element from queue"<<endl;
cout<<"3) Display all the elements of queue"<<endl;
cout<<"Enter your choice : "<<endl;
cin>>ch;
switch (ch)
{
case 1: Insert();
break;
case 2: Delete();
break;
case 3: Display();
break;
default: cout<<"Invalid choice"<<endl;
}
}
return 0;
}
