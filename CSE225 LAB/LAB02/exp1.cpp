#include<iostream>
using namespace std;

class DataStructure
{

  public: //access specifier public or private
    double cgpa = 3.87;
    void Name()
    {
        cout << "Hi, it's Ihsanul" << endl;
    }
    void info()
    {
        cout << "ECE dept. Major CSE" << endl;
    }

};

int main()
{
    //creating object
    DataStructure obj;

    //dot operator to access things
    obj.Name();
    obj.info();
    cout << "CGPA: " << obj.cgpa << endl;

    return 0;

}
