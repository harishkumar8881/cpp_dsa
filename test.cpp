#include <iostream>
#include<cmath>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    int a = 12;
    float b = 12.3;
    double d = 123.4201;
    string text = "hello world";
    map<string, double> salaries;
    map<string, double>::iterator itr;
    salaries["harish"] = 123.45;
    salaries["ab"] = 123.123;
    for(itr = salaries.begin(); itr != salaries.end(); ++itr){
        cout << "salary of " << itr->first << " is " << itr->second  << endl;
    }
    return 0;
}
