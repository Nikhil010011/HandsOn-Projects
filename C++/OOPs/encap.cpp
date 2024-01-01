#include<iostream>
#include<vector>
using namespace std;

class Animal {
    private:
        int age;
        int weight;

    public:
        Animal() {
            cout<<"default constructor"<<endl;
        }

        Animal(int a) {
            cout<<"parameterized constructor 1"<<endl;
            this->age = a;
        }

        int getAge() {
            return age;
        }

        void setAge(int a) {
            age = a;
        }

        int getWeight() {
            return weight;
        }

        void setWeight(int w) {
            weight = w;
        }

        void eat() {
            cout<<"Eating"<<endl;
        }

        void sleep() {
            cout<<"Sleeping"<<endl;
        }
        static int v;
};

int Animal::v = 5; //set static variable value

int main() {
    Animal* a = new Animal(); //dynamic allocation
    cout<<a->getAge()<<endl; //garbage value
    a->setAge(12);
    cout<<a->getAge()<<endl;
    cout<<a->v<<endl; // once value is set, then the static variable can be used

    return 0;
}