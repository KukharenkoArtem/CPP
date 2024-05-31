#include <iostream>
using namespace std;

class AdHocSquare {
public:
    AdHocSquare(double side);
    void set_side(double new_side);
    double get_area();

private:
    double side;
};

AdHocSquare::AdHocSquare(double side) : side(side) {}

void AdHocSquare::set_side(double new_side) {
    side = new_side;
}

double AdHocSquare::get_area() {
    return side * side;
}

int main() {
    AdHocSquare square(4);
    cout << "Площа: " << square.get_area() << endl;

    square.set_side(6);
    cout << "Площадь (після зміни сторони): " << square.get_area() << endl;

    return 0;
}
