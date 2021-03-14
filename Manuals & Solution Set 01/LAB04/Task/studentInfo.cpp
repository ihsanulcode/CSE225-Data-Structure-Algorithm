#include "studentInfo.h"
#include<string>

studentInfo::studentInfo()
{
    this->id = 0;
    this->name = "";
    this->cgpa = 0.00;
}

studentInfo::studentInfo(int id, string name, double cgpa)
{
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}

studentInfo::studentInfo(int id)
{
    this->id = id;
}

void studentInfo::setId(int id)
{
    this->id = id;
}

void studentInfo::setName(string name)
{
    this->name = name;
}

void studentInfo::setCgpa(float cgpa)
{
    this->cgpa = cgpa;
}

int studentInfo::getId()
{
    return id;
}

string studentInfo::getName()
{
    return name;
}

float studentInfo::getCgpa()
{
   return cgpa;
}

void studentInfo::print()
{
    cout << id << ", " << name << ", " << cgpa << endl;
}
bool studentInfo::operator==(studentInfo s){
    if(this->id==s.id)
        return true;
    else
        return false;
}
bool studentInfo::operator!=(studentInfo s){
    if(this->id!=s.id)
        return true;
    else
        return false;
}
ostream& operator << (ostream& os, studentInfo& student){
    os << student.id << ", " << student.name << ", " << student.cgpa << endl;
    return os;
}
