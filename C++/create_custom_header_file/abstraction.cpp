#include<iostream>
#include "bird.h"
using namespace std;

void birdActions(Bird* &b) {
    b->eat();
    b->fly();
}

int main() {
    Bird* eagle = new Eagle();
    birdActions(eagle);

    Bird* crow = new Crow();
    birdActions(crow);

}