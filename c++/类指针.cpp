#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
class A
{
public:
    virtual void show() { cout << "A" << endl; }
    // void show() { cout << "A" << endl; }

private:
};
class B : public A
{
public:
    void show() { cout << "B" << endl; }

private:
};
class C : public B
{
public:
    void show() { cout << "C" << endl; }

private:
};
void fun1(A *p)
{
    p->show();
}
void fun2(A &p)
{
    p.show();
}
void fun3(A p)
{
    p.show();
}
int main()
{
    A a;
    B b;
    C c;
    fun1(&a);
    fun1(&b);
    fun1(&c);
    fun2(a);
    fun2(b);
    fun2(c);
    fun3(a);
    fun3(b);
    fun3(c);
    A *p1 = new A;
    A *p2 = new B;
    A *p3 = new C;
    p1->show();
    p2->show();
    p3->show();
}