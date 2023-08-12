#include<iostream>
using namespace std;

class A {
public:
    virtual void dispA() {
        cout << "This is class A" << endl;
    }
};

class B : virtual public A {
public:
    void dispB() {
        cout << "This is class B" << endl;
    }
};

class C : virtual public A {
public:
    void dispC() {
        cout << "This is class C" << endl;
    }
};

class D : public B, public C {
public:
    void dispD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    D d;

    d.dispA();
    d.dispB();
    d.dispC();
    d.dispD();

    return 0;
}

