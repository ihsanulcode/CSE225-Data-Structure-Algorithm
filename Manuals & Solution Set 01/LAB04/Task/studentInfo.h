#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

class studentInfo
{
private:
    int id;
    string name;
    float cgpa;
public:
    studentInfo();
    studentInfo(int,string,double);
    studentInfo(int);
    void setId(int);
    void setName(string);
    void setCgpa(float);
    int getId();
    string getName();
    float getCgpa();
    void print();
    bool operator ==(studentInfo s);
    bool operator !=(studentInfo s);
    friend ostream& operator << (ostream&, studentInfo&);

};

#endif // STUDENTINFO_H_INCLUDED
