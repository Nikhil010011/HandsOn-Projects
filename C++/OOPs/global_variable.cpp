#include<iostream>
using namespace std;

int x = 2; //global variable

int main() {
    ::x = 4;

    int x = 20; //local to main()
    cout<<x<<endl; // local
    cout<<::x<<endl; //access global with ::

    {
        int x = 50; // local to this block scope
        {
            int x = 100; // local to this block scope
            cout<<x<<endl;
            cout<<::x<<endl;
        }
        cout<<x<<endl; 
        cout<<::x<<endl;

    }

    return 0;
}