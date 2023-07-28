// ADDING AND TRAVERSING IN A SINGLY LINKED LIST

#include<iostream>
using namespace std;
void create(int);
void traverse();
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void create(int item)
    {
        node *ptr = new node;
        if(ptr == NULL)
        {
            cout<<"\nOVERFLOW\n";
        }
        else
        {
            ptr->data = item;
            ptr->next = head;
            head = ptr;
            cout<<"\nNode inserted\n";
        }

    }
void traverse()
    {
        struct node *ptr;
        ptr = head;
        if(ptr == NULL)
        {
            cout<<"Empty list..";
        }
        else
        {
            cout<<"printing values . . . . .\n";
            while (ptr!=NULL)
            {
                cout<<endl<<ptr->data;
                ptr = ptr -> next;
            }
        }
     }

int  main ()
{
    int choice,item;
    do
    {
        cout<<"\n1.Append List\n2.Traverse\n3.Exit\n4.Enter your choice?";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nEnter the item\n";
            cin>>item;
            create(item);
            break;
            case 2:
            traverse();
            break;
            case 3:
            exit(0);
            break;
            default:
            cout<<"\nPlease enter valid choice\n";
        }

    }while(choice != 3);
    return 0;
}
