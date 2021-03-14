#include<iostream>     //Task 2 :: Ihsanul Haque Asif 2013664642
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

    //this function will return the number of elements in the list
    static int countElements(node* head)
    {
        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        return count;
    }
};

int main()
{
    //declaring an object of linkList class
    linkedList O;

    //getting the number of elements from user
    int n;
    cout << "How many elements you want to add?" << endl;
    cin  >> n;

    if(n!=0)
    {
        //getting elements from user
        cout << "\nEnter elements to the Node:" << endl;
        for(int i=1;i<=n;i++)
        {
            int value;
            cin >> value;
            O.addNode(value);  //adding elements to the Node
        }
    }

    //printing the number of elements using countElements() function
    cout<<"\nNumber of elements in the list : " << linkedList::countElements(O.gethead()) << endl;


}

