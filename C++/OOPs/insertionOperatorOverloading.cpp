#include<iostream>
using namespace std;

class Date {
    int m, d, y;
    public:
        Date(int _m, int _d, int _y) {
            m = _m;
            d = _d;
            y = _y;
        }

        friend ostream& operator<<(ostream& os, const Date& date);
};

ostream& operator<<(ostream& os, const Date& date) {
    os << date.m << '/' << date.d << '/' << date.y;
    return os;
}

int main() {
    Date d(12,31,2023);
    cout<<d;
}