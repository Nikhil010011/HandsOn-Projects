#include<iostream>
using namespace std;

class A {
    public:
        static int val;

        static void print() { // static function can only access static variables, non-static variable throws CTE
            //no this pointer accessible/
            cout<<val<<endl;
        }
};

int A::val;

int main() {
    A a;
    a.val = 50;
    a.print();

    A b;
    A::val = 100;
    A::print();
    b.print();

    return 0;
}