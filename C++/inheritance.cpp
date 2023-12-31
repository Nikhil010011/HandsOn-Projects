#include<iostream>
using namespace std;

class Animal {
    public:
        
        int age;
        int weight;

        Animal() {
            cout<<"animal constructor"<<endl;
        }

        void eat() {
            cout<<"Eating"<<endl;
        }
        virtual void speak() {
            cout<<"Speaking"<<endl;
        }
};

class Dog:public Animal {
    public:
        Dog() {
            cout<<"dog constructor"<<endl;
        }
        //function overriding
        void speak() {
            cout<<"barking"<<endl;
        }
};


int main() {

    // Dog d1;
    // d1.eat();

    //function overriding
    // Animal* a = new Dog(); //up-casting
    // a->speak(); //if parent's function is not virtual then parent's function will be called
                //if parent's function is "virtual" then child's function is called. This is decided at runtime.

    // // Dog* d = new Animal(); // down-casting not possible without explicitly specifying
    // Dog* d = (Dog*) new Animal(); //works on type-casting
    // d->speak();


    //checking constructors
    cout<<"----------------------------------------\n";
    // Animal* e = new Animal();
    // Animal* f = new Dog(); //calls both constructors
    // Dog* g = new Dog(); //calls both constructors
    Dog* h = (Dog*) new Animal();

    return 0;
}