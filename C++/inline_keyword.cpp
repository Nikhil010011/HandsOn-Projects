#include<iostream>
using namespace std;

void print() {
    cout<<"printing"<<endl;
}

inline void printInline() {
    cout<<"printing inline"<<endl;
}

int main() {
    print(); // call the function .. add an entry in the call stack

    printInline(); // replaces the inline function defition where the inline function is called
}