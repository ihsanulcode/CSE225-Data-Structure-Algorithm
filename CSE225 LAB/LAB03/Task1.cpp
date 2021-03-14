#include<iostream>     //Task 1 :: Ihsanul Haque Asif 2013664642
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
        }
        else            //if head is not NULL then set tail.next = temp, tail = tail.next
        {
            tail->next = temp;  //add temp node tail
            tail = tail->next; //changing the tail (because the new node is the new tail now!)
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
        if(head==NULL){
            cout << "NULL";
        }
        else{
            cout << head->data << endl;
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

    if(n!=0)
    {
        //getting values from user
        cout << "\nEnter values to the Node:" << endl;
        for(int i=1;i<=n;i++)
        {
            int value;
            cin >> value;
            O.addNode(value);  //adding values to the Node
        }
    }


    cout<<"\nOutput :" << endl;
    if(O.gethead() == NULL || O.gethead()->next == NULL){       //if no values in the list : that means head is NULL
        cout << "Nothing to print" << endl;                    //OR there is only 1 value in the list
    }
    else{
        linkedList::display(O.gethead()->next);  //send O.gethead()->next to skip the 1st value
    }

}
