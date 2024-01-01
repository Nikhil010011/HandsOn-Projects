#include<iostream>
using namespace std;

class Box {
    private:
        int width;

        Box(int _val): width(_val) {}
    public:
        int getWidth() const {
            return width;
        }
        friend class BoxFactory; //makes private member accessible to mentioned class
};

class BoxFactory {
    int count;

    public:
        Box getBox(int _w) {
            ++count;
            return Box(_w);
        }
};

int main() {
    BoxFactory b;
    Box box = b.getBox(5);
    cout<<box.getWidth()<<endl;
    return 0;
}