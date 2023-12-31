#include<iostream>
using namespace std;

class Animal {
    private:
        int weight;
    
    public:
        //stage or properties
        int age;
        string name;

        //constructors
        //Default constructor
        Animal() {
            this->weight = 0;
            this->age = 0;
            this->name = "";
            cout<<"constructor called"<<endl;
        }

        //parameterized constructor
        Animal(int age) {
            this->age = age;
            cout<<"parameterized constructor called"<<endl;
        }

        Animal(int age, int weight) {
            this->age = age;
            this->weight = weight;
            cout<<"parameterized constructor 2 called"<<endl;
        }

        Animal(int age, int weight, string name) {
            this->age = age;
            this->weight = weight;
            this->name = name;
            cout<<"parameterized constructor 3 called"<<endl;
        }

        //copy constructor
        Animal(Animal& obj) {
            this->age = obj.age;
            this->weight = obj.weight;
            this->name = obj.name;
            cout<<"Inside copy constructor"<<endl;
        }

        //destructor
        ~Animal() {
            cout<<"Destructor called"<<endl;
        }

        //behaviour
        void eat() {
            cout<<"Eating"<<endl;
        }

        void sleep() {
            cout<<"Sleeping"<<endl;
        }

        void setWeight(int weight) {
            this->weight = weight;
        }

        int getWeight() {
            return weight;
        }
};

int main() {
    cout<<"Size of class is: "<<sizeof(Animal)<<endl;
    //Object creation
    //dynamic
    Animal* b = new Animal();
    (*b).age = 15;
    b->name = "Billi";
    cout<<"Age of b is: "<<(*b).age<<endl;
    cout<<"Name of b is: "<<b->name<<endl;
    b->setWeight(50);
    cout<<"Weight of b is: "<<b->getWeight()<<endl;
    b->eat();
    b->sleep();

    Animal* c = new Animal(17);
    Animal* d = new Animal(17, 50);
    Animal* e = new Animal(17, 50, "fox");


    //object copy
    Animal f;
    Animal g(f);

    //deallocate memory for dynamic object - calls destructor
    delete e;
    //static objects destructor are called at the end of current scope.
    return 0;
}