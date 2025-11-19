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

int main ()
{
    Student rahim(9, 7, 3.97);
    Student karim(1, 7, 5.00);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    
    return 0;
}