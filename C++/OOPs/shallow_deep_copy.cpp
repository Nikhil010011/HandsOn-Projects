#include<iostream>
using namespace std;

class A {
    public:
        int x;
        int* y;

        A(int _x, int _y):x(_x), y(new int(_y)) {}

        //default dumb copy constructor
        //It does shallow copy
        // A(const A &obj) {
        //     x = obj.x;
        //     y = obj.y;
        // }

        //deep copy
        A(const A &obj) {
            x = obj.x;
            y = new int(*obj.y);
        }

        void print() const {
            printf("X: %d\nPtr Y: %p\nContent of Y (*y): %d\n\n", x, y, *y);
        }

        ~A() {
            delete y;
        }
};

int main() {
    // A a(1, 2);
    // a.print();

    // // A b(a)
    // A b = a; // this copies ptr y with address stored in it.
    // b.print();

    // // *b.y = 20; // changes values for both objects
    // // b.print(); //20
    // // a.print(); //20
    
    // //to overcome this we need to override copy constructor
    // *b.y = 20; // changes values for b object
    // b.print(); //20
    // a.print(); //2


    A *a = new A(2,3);
    A b = *a;
    a->print();
    b.print();
    delete a; //destructor deletes *y
    b.print();
    
    return 0;
}