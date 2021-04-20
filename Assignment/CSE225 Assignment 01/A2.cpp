#include <iostream>
#include <string>
using namespace std;
const int Max_size = 10;

typedef struct {
    /*
    Blob is a structure type that contains an integer field position
    */
    int position;
} blob;


class Bag {
    //A bag has a maximum size indicated by the field Size
    blob *b[Max_size];

public:

    Bag(){ //constructor
        for (int i = 0; i < Max_size; i++)
            b[i] = NULL; //storing NULL
    }

    ~ Bag(){ //destructor
    }


    bool isEmpty () {
        /*
        isEmpty function will check the bag is empty or not
        */
        for (int i = 0; i < Max_size; i++)
            if (b[i] != NULL)
                return false;

        return true;
    }


    bool isFull () {
         /*
        isFull function will check the bag is full or not
        */
        for (int i = 0; i < Max_size; i++)
            if (b[i] == NULL)
                return false;

        return true;
    }


    //to insert a new blob in the bag
    void insert (blob *p) {

        if(isFull())
            cout << "Bag is full!" << endl;

        if (b[p->position] == NULL)
            b[p->position] = p;
    }

    //Delete removes a blob from the bag
    void Delete (blob* p) {

        if(isEmpty())
            cout << "Bag is empty!" << endl;

        if (b[p->position] != NULL)
            b[p->position] = NULL;

    }

    //printing
    void print () {
        cout << "[ ";
        for (int i = 0; i < Max_size; i++){
            if(b[i] == NULL){
                cout << "NULL ";
            }else{
                cout << b[i]->position << " ";
            }
        }cout << "]\n";
    }


};



int main()
{

    //declaring 5 blobs
    blob a;
    blob b;
    blob c;
    blob d;
    blob e;

    //assignment values to them
    a.position = 1;
    b.position = 3;
    c.position = 5;
    d.position = 7;
    e.position = 9;

    //declaring an object of bag
    Bag bag;
    bag.insert(&a);
    bag.insert(&b);
    bag.insert(&c);
    bag.insert(&d);
    bag.insert(&e);
    bag.print();

    bag.Delete(&a);
    bag.Delete(&d);
    bag.Delete(&e);
    bag.print();

    return 0;
}

