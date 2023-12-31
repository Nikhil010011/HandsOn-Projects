#include<iostream>
using namespace std;

class Param {
    public:
        int val;

    void operator +(Param obj) {
        cout<<(this->val - obj.val)<<endl;
    }
};

int main() {
    Param obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    //this should print the difference between them
    obj1+obj2;
    return 0;
}