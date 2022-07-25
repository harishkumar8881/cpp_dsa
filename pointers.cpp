#include <iostream>
using namespace std;

int addByValue(int a, int b){
    return a + b;
}

int addByReference(int& a, int& b){
    return a + b;
}

int addByReference2(int *a, int *b){
    return *a + *b;
}

int main()
{
    int a = 12, b = 13;
    int *p;
    p = &a;
    cout << &a << " " << &b << endl;

    cout << "value at p " << *p << endl;
    cout << "address of p " << p << endl;
    cout << "add a and b by value " << addByValue(a, b) << endl;
    cout << "add a and b by reference " << addByReference(a, b) << endl;
    cout << "add a and b by reference2 " << addByReference2(&a, &b) << endl;
    return 0;
}