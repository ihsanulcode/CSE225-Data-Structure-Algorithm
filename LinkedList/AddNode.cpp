#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linkedList
{
private:
    node *head, *tail;
public:
    //default constructor
    linkedList()
    {
        head = NULL;
        tail = NULL;
    }

    //this function will add nodes
    void addNode(int n)
    {
        node *temp = new node; //allocation the space required for the node using new operator
        temp->data = n;       //assigning the value (n) to the 'data' of temp node
        temp->next = NULL;   //assigning NULL to the next of temp node

        if(head == NULL)   //if the head is NULL then simply assigning temp node to head and tail
        {
            head = temp;
            tail = temp;
            cout << "New Node created!" << endl; //testing message
        }
        else            //if head is not NULL then set tail.next = temp, tail = tail.next
        {
            tail->next = temp;  //add temp node tail
            tail = tail->next; //changing the tail (because the new node is the new tail now!)
            cout << "Node added!" << endl;   //testing message
        }
    }

    //this function will return the head of the node
    node* gethead()
    {
        return head;
    }

    //this function will display the values from the linked list
    static void display(node* head)
    {
        if(head==NULL)
        {
            cout << "NULL";
        }
        else
        {
            cout << head->data << " -> ";
            display(head->next);
        }
    }
};

int main()
{
    //declaring an object of linkList class
    linkedList O;

    //getting the number of values from user
    int n;
    cout << "How many values you want to add?" << endl;
    cin  >> n;

    //getting values from user
    cout << "\nEnter values to the Node:" << endl;
    for(int i=1;i<=n;i++)
    {
        int value;
        cin >> value;
        O.addNode(value);  //adding values to the Node
    }

    cout<<"\n\nElements in the list are :" << endl;
    linkedList::display(O.gethead());  //send O.gethead()->next to skip the 1st value
}



