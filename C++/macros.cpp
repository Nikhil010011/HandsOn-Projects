#include<iostream>
using namespace std;

#define PI 3.14159
#define MAXX(x,y) (x>y ? x:y)

float circleArea(float r) {
    return PI*r*r;
}

float circlePerimeter(float r) {
    return PI*2*r;
}

void fun() {
    int x = 5;
    int y = 10;
    int c = MAXX(x,y);
    cout<<"max: "<<c<<endl;
}

int main() {
    cout<<circleArea(5)<<endl;
    cout<<circlePerimeter(5)<<endl;
    fun();
    return 0;
}