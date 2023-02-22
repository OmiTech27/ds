#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}
    *front = NULL,
    *rear, *temp;

void Insert()
{
    temp = new Node;
    cout << "\nEnter Data\n";
    cin >> temp->data;
    temp->next = NULL;
    if (front == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}
void Delete()
{
    if (front == NULL)
    {
        cout << "\nQueue is empty\n";
    }
    else
    {
        temp = front;
        front = front->next;
        cout << "\nElement Deleted From Queue is " << temp->data;
        delete (temp);
    }
}
void Display()
{

    if (front == NULL)
    {
        cout << "\nQueue is empty\n";
    }
    else
    {
        temp = front;
        cout << "The list contains: ";
        while (temp != NULL)
        {
            if (temp->next == NULL)
            {
                cout << temp->data;
                temp = temp->next;
            }
            else
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
        }
    }
}
int main()
{
    int ch;
    while (1)
    {
        cout << "\nPress 1 For Insert \nPress 2 For Delete: \nPress 3 For Display: \n";
        cin >> ch;
        // cout << "\n";
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:

            Display();
            cout << "\n";
            break;
        default:
            cout << "\nWrong Choice";
            break;
        }
    }
    return 0;
}
