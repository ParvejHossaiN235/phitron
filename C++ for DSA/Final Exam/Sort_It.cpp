/*
You will be given data for N students, where each student will have a nm (nm), class (cls), s (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.

Input Format

First line will contain N.
Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total;
};

bool cmp(Student l, Student r)
{
    if (l.total > r.total) return true;
    else if (l.total < r.total) return false;

    
    if (l.id < r.id) return true;
    else return false;
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].total = a[i].math_marks + a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " "
             << a[i].cls << " "
             << a[i].s << " "
             << a[i].id << " "
             << a[i].math_marks << " "
             << a[i].eng_marks << endl;
    }

    return 0;
}
