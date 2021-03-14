#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int max_items = 5;

template <class T>
class UnsortedType
{

private:
   int length;
   T info[max_items];
   int currentPos;
public :
        UnsortedType();
        bool isEmpty();
        bool isFull();
        void makeEmpty();
        void insertItem(T);
        void deleteItem(T);
        void retrieveItem(T&, bool&);
        int lengthIs();
        void resetList();
        void getNextItem(T&);

};
#endif // UNSORTEDTYPE_H_INCLUDED
