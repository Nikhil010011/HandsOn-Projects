#include<iostream>
using namespace std;

class Animal {
    private:
    int weight;
    
    public:
    //stage or properties
    int age;
    string name;

    //behaviour
    void eat() {
        cout<<"Eating"<<endl;
    }

    void sleep() {
        cout<<"Sleeping"<<endl;
    }

    void setWeight(int w) {
        weight = w;

    }

    int getWeight() {
        return weight;
    }
};

int main() {
    cout<<"Size of empty class is: "<<sizeof(Animal)<<endl;
    //Object creation
    //static
    Animal a;
    a.age = 12;
    a.name = "Lion";
    cout<<"Age of a is: "<<a.age<<endl;
    cout<<"Name of a is: "<<a.name<<endl;
    a.eat();
    a.sleep();
    a.setWeight(101);
    cout<<"Weight: "<<a.getWeight()<<endl;
    return 0;
}