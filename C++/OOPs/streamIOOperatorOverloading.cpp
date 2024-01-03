#include<iostream>
using namespace std;

class Date {
    int m, d, y;
    public:
        Date() {
            m = 0;
            d = 0;
            y = 0;
        }

        Date(int _m, int _d, int _y) {
            m = _m;
            d = _d;
            y = _y;
        }

        friend ostream& operator<<(ostream& os, const Date& date);
        friend istream& operator>>(istream& is, Date &dt);
};

ostream& operator<<(ostream& os, const Date& date) {
    os << date.m << '/' << date.d << '/' << date.y;
    return os;
}

istream& operator>>(istream& is, Date &dt) {
    is>> dt.m >> dt.d >> dt.y;
    return is;
}

int main() {
    //overloaded << operator to output date in MM/dd/yyyy
    Date d(12,31,2023);
    cout<<d;

    //overloaded >> operator to input date
    Date d1;
    cout<<"Enter date in MM/dd/yyy: "<<endl;
    cin>>d1;
    cout<<"Date entered: "<<d1<<endl;
}
