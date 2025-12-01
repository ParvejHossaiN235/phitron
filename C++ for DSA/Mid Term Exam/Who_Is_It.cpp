/*
A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

Input Format

First line will contain T, the number of test cases.
For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
*/


#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[105];
    char section;
    int totalMarks;

    // Constructor
    Student(int id, const char* name, char section, int totalMarks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->totalMarks = totalMarks;
    }
    
    Student() { }
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student s[3]; 

        for (int i = 0; i < 3; i++)
        {
            int id, marks;
            char name[105], section;

            cin >> id >> name >> section >> marks;

            s[i] = Student(id, name, section, marks);
        }

        // best student
        Student best = s[0];

        for (int i = 1; i < 3; i++)
        {
            if (s[i].totalMarks > best.totalMarks)
                best = s[i];
            else if (s[i].totalMarks == best.totalMarks && s[i].id < best.id)
                best = s[i];
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.totalMarks << "\n";
    }

    return 0;
}
