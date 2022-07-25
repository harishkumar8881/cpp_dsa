#include <iostream>
using namespace std;

int main()
{
    int a = 12, b = 13;
    int *p;
    p = &a;
    cout << &a << " " << &b << endl;

    cout << "value at p " << *p << endl;
    cout << "address of p " << p << endl;
    return 0;
}