// Copy dynamic object

#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this-> jersey = jersey;
    }
};

int main ()
{
    Cricketer* dhoni = new Cricketer("India", 7);
    Cricketer* kohli = new Cricketer("India", 18);

    *dhoni = *kohli;

    delete kohli;

    cout << dhoni->country << " " << dhoni->jersey << endl;
    return 0;
}