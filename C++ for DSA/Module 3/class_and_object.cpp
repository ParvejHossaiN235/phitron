#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main ()
{
    // student a;
    // a.roll = 20;
    // a.gpa = 4.6;
    // char temp[100] = "Rohim";
    // strcpy(a.name, temp);

    // cout << a.name << " " << a.roll << " " << a.gpa << endl;

    //input niye value 
    student a, b;
    cin >> a.name >> a.roll >> a.gpa;
    cin >> b.name >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}