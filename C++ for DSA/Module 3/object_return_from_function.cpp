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

Student fun()
{
    Student rahim(3, 7, 4.97);
    return rahim;
}

int main ()
{
    Student obj = fun();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    
    return 0;
}