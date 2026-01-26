#include <bits/stdc++.h>
using namespace std;

// ================= STACK =================
class MyStack
{
public:
    int arr[100000];
    int topIndex;

    MyStack()
    {
        topIndex = -1;
    }

    void push(int x)
    {
        topIndex++;
        arr[topIndex] = x;
    }

    int pop()
    {
        int val = arr[topIndex];
        topIndex--;
        return val;
    }

    bool empty()
    {
        return topIndex == -1;
    }
};

// ================= QUEUE =================
class MyQueue
{
public:
    int arr[100000];
    int frontIndex, rearIndex;

    MyQueue()
    {
        frontIndex = 0;
        rearIndex = -1;
    }

    void push(int x)
    {
        rearIndex++;
        arr[rearIndex] = x;
    }

    int pop()
    {
        int val = arr[frontIndex];
        frontIndex++;
        return val;
    }

    bool empty()
    {
        return frontIndex > rearIndex;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    // size different → never same
    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    MyStack st;
    MyQueue q;

    // stack input
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // queue input
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // compare removal order
    while (!st.empty() && !q.empty())
    {
        if (st.pop() != q.pop())
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
