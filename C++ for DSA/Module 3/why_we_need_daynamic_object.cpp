#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student (int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;               // constrator bole
        this->gpa = gpa;
    }
};

Student* fun()
{
    Student rahim(3, 7, 4.97);
    Student *p = &rahim;
    return p;
}

int main ()
{
    Student* p = fun();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    
    return 0;
}