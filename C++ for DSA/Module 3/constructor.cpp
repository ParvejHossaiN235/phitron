#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    double gpa;

    Student (const char *n, int r, int c, double g)
    {
        strcpy(name, n);
        roll = r;
        cls = c;               // constrator bole
        gpa = g;
    }
};

int main ()
{
    Student rahim("Rahim", 11, 7, 3.67);
    Student karim("Karim", 1, 7, 5.00);

    cout << rahim.name << " " << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.name << " " << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    
    return 0;
}