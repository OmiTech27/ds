#include <iostream>
using namespace std;
class Node
{
public:
    int info;
    Node *next;
};
class List : public Node
{
    Node *first, *last;

public:
    List()
    {
        first = NULL;
        last = NULL;
    }
    void Create()
    {
        Node *temp;
        temp = new Node;
        int no;
        cout << "\nEnter an element \n";
        cin >> no;
        temp->info = no;
        temp->next = NULL;
        if (first == NULL)
        {
            first = temp;
            last = first;
        }
        else
        {
            last->next = temp;
            last = temp;
        }
    }
    void Insert()
    {
        int ch;
        int no;
        cout << "\n1 For Insert at Begining\n2 For Insert at position\n";
        cin >> ch;
        Node *prev, *cur, *temp;
        switch (ch)
        {
        case 1:
            prev = first;
            cur = new Node;
            cout << "\nEnter an Element\n";
            cin >> no;
            cur->info = no;
            cur->next = NULL;
            if (prev == NULL)
            {
                first = cur;
            }
            else
            {
                cur->next = first;
                first = cur;
            }
            break;
        case 2:
            int index;
            cout << "\nEnter an Element\n";
            cin >> no;
            cout << "Enter Index Position ";
            cin >> index;
            cur = new Node;
            cur->info = no;
            cur->next = NULL;
            if (index < 1)
            {
                cout << "\nposition should be >= 1";
            }
            else if (index == 1)
            {
                cur->next = first;
                first = cur;
            }
            else
            {
                temp = first;
                for (int i = 1; i < index - 1; i++)
                {
                    if (temp != NULL)
                    {
                        temp = temp->next;
                    }
                }
                if (temp != NULL)
                {
                    cur->next = temp->next;
                    temp->next = cur;
                }
                else
                {
                    cout << "\nThe previous node is null.";
                }
            }
            break;
        }
    }
    void Delete()
    {
        if (first == NULL)
        {
            cout << "\nElement is not exist";
            return;
        }
        else
        {
            Node *temp = first;
            Node *prev;
            int ch;
            cout << "\n1 For First\n2 For Last\n3 For Position\n";
            cin >> ch;
            switch (ch)
            {
            case 1:
                first = first->next;
                break;
            case 2:
                while (temp != last)
                {
                    prev = temp;
                    temp = temp->next;
                }
                if (temp == last)
                {
                    prev->next = NULL;
                    last = prev;
                }
                break;
            case 3:
                int pos, count = 1;
                cout << "\nEnter position\n";
                cin >> pos;
                while (count != pos)
                {
                    prev = temp;
                    temp = temp->next;
                    count++;
                }
                if (count == pos)
                {
                    prev->next = temp->next;
                }
                break;
            }
        }
    }
    int Search(int element)
    {
        int position = -1, flag = 0;
        if (first != NULL)
        {
            Node *temp;
            temp = first;
            while (temp != NULL)
            {
                position++;
                if (temp->info == element)
                {
                    flag = 1;
                    break;
                }
                temp = temp->next;
            }
        }
        if (flag != 0)
        {
            return position;
        }
        else
        {
            return position;
        }
    }
    void Display()
    {
        Node *temp = first;
        if (first == NULL)
        {
            cout << "\nList is Empty";
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->info;
                cout << "-->";
                temp = temp->next;
            }
            cout << "NULL";
        }
    }
};
int main()
{
    List l;
    int ch;
    while (1)
    {
        cout << "\n1 For Creation of Node\n2 For Traverse List\n3 For Insert \n4 For Delete an element\n5 For Search\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            l.Create();
            break;
        case 2:
            l.Display();
            break;
        case 3:
            l.Insert();
            break;
        case 4:
            l.Delete();
            break;
        case 5:
            if (l.Search(50) == -1)
            {
                cout << "\nList is empty";
            }
            else if (l.Search(50) == 0)
            {
                cout << "\nElement not found";
            }
            else
            {
                cout << "\nElement found at " << l.Search(50);
            }
            break;
        default:
            cout << "\nWrong Choice\n";
            break;
        }
    }
    return 0;
}
