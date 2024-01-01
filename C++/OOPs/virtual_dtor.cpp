#include<iostream>
using namespace std;

class Base {
    public:
        //virtual constructor not possible
        Base() {
            cout<<"Base constructor"<<endl;
        }

        //virtual destructor ensures running of destructor of derived class
        virtual ~Base() {
            cout<<"Base constructor"<<endl;
        }
};

class Derived : public Base {
    private:
        int *a;
    public:
        Derived() {
            a = new int[100];
            cout<<"Derived Constructor"<<endl;
        }

        ~ Derived() {
            delete[] a;
            cout<<"Derived Destructor"<<endl;
        }
};

int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}