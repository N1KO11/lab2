#include <iostream>
#include "4.h"
using namespace std;
int main() {
    Square sq(0, 0, 2);
    cout << "Координаты квадрата до передвижения: (" << sq.getX() << ", " << sq.getY() << ")" << endl;
    sq.move(3, 4);
    cout << "Координаты квадрата после передвижения: (" << sq.getX() << ", " << sq.getY() << ")" << endl;
    return 0;
}
