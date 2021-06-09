#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
class A
{
private:
    int *p;

public:
    A(int c)
    {
        p = new int();
        *p = c;
    };
    ~A() { delete p; };
    void show()
    {
        cout << *p;
    }
};
int main()
{
    A a(5);
    a.show();
}