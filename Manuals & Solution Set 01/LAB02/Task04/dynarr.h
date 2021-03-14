#ifndef DYNARR_H
#define DYNARR_H

template <class T>
class dynarr{

    private:
        T *data;
        int size;
    public:
        dynarr();
        dynarr(int);
        ~dynarr();
        void setValue(int, T);
        T getValue(int);

};
#endif // DYNARR_H
