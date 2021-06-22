#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

class A
{
    int i;

public:
    A() { cout << "in A's def const\n"; };
    A(int k)
    {
        cout << "In A const\n";
        i = k;
    }
};
class B : virtual public A
{
public:
    B() { cout << "in B's def const\n"; };
    B(int i) : A(i) { cout << "in B const\n"; }
};
class C : public B
{
public:
    C() { cout << "in C def cstr\n"; }
    C(int i) : B(i) { cout << "in C const\n"; }
    // C(int i) : B(i), A(i) { cout << "in C const\n"; }
};

int main()
{
    C c(2);
    return 0;
}