#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head, *tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    node* gethead()
    {
        return head;
    }

    static void display(node *head)
    {
        if(head==NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->data << endl;
            display(head->next);
        }
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);

    linked_list b;
    b.add_node(3);
    b.add_node(4);

    cout<<"Elements of list a are :" << endl;
    linked_list::display(a.gethead());

    cout<<"Elements of list b are :" << endl;
    linked_list::display(b.gethead());
}
