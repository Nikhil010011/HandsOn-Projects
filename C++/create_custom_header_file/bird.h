#if !defined(BIRD_H)
#define BIRD_H

#include<iostream>
using namespace std;

class Bird { // interface / abstract class
    public:
        virtual void eat() = 0;
        virtual void fly() = 0;
};

class Eagle: public Bird {
    private: // making this private so that the below functions can be accessed by interface only
        void eat() {
            cout<<"Eagle is eating"<<endl;
        }
        void fly() {
            cout<<"Eagle is flying"<<endl;
        }    
};


class Crow: public Bird {
    private: //// making this private so that the below functions can be accessed by interface only
        void eat() {
            cout<<"Crow is eating"<<endl;
        }
        void fly() {
            cout<<"Crow is flying"<<endl;
        }
};

#endif //BIRD_H