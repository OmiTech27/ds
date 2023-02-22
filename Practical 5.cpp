#include <iostream>
#include<conio.h>
#include<stdlib.h>
int top=-1;
using namespace std;
class Stack
{
int arr[1000];
int max;
public:
Stack(int a)
{
max=a;
}
void Push(int x)
{
if(top==(max-1))
{
cout<<"\nStack is full";
}
else
{
top++;

arr[top]=x;
}
}
void Pop()
{
if(top==-1)
{
cout<<"\nStack is Empty";
}
else
{
top--;
}
}
void Display()
{
if(top==-1)
{
cout<<"\nStack is Empty";
}
else
{
for(int i=0;i<=top;i++)
{
cout<<arr[i]<<" ";
}
}
}
};
int main()
{
int max,ch,no;
cout<<"\nEnter Size of An Array ";
cin>>max;
Stack s(max);
while(1)
{
cout<<"\n1 For Push\n2 For Pop\n3 For Display\n";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nEnter Element To Insert ";
cin>>no;
s.Push(no);
break;
case 2:
s.Pop();
s.Display();
break;
case 3:
s.Display();
break;
}
}
return 0;
}
