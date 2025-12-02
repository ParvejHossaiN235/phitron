/*
You will be given data for N students, where each student will have a nm (nm), class (cls), s (s) and student ID (id). The Headmaster decided to change the ss of the students. He wants to reverse their ss. Now he needs your help to do so.

Your task is reverse their s and print all the students data. That means the s of the first student will be replaced by the s of the last student, the s of the second student will be replaced by the s of the second last student and so on. See the sample input and output for more clarifications.

Input Format

First line will contain N.
Next N lines will contain nm, cls, s, and id respectively.
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
};


int main ()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    int left = 0, right = n - 1;

    while (left < right)
    {
        swap(a[left].s, a[right].s);
        left++;
        right--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}