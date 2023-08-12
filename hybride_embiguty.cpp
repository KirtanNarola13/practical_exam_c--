/*
5. Write a Program to handle ambiguity error permanently in Hybrid inheritance.*
*/

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "This is class A." << endl;
    }
};

class B : virtual public A {
public:
    void display() {
        cout << "This is class B." << endl;
    }
};

class C : virtual public A {
public:
    void print() {
        cout << "This is class C." << endl;
    }
};

class D : public B, public C {
public:
    void output() {
        cout << "This is class D." << endl;
    }
};

int main() {
    D d;
    
    d.show();   
    d.display();
    d.print();  
    d.output(); 
    
    return 0;
}
