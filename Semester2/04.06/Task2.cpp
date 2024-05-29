#include <iostream>
using namespace std;

class Square {
private:
    double side;
    double area;

public:
    Square(double side);
    void set_side(double new_side);

    void print() const {
        cout << "Квадрат: сторона=" << side << " площа=" << area << endl;
    }
};

Square::Square(double side) {
    if (side >= 0) {
        this->side = side;
        this->area = side * side;
    } else {
        cout << "Помилка. Сторона не може бути відʼємною." << endl;
    }
}

void Square::set_side(double new_side) {
    if (new_side >= 0) {
        this->side = new_side;
        this->area = new_side * new_side;
    } else {
        cout << "Помилка. Сторона не може бути відʼємною." << endl;
    }
}

int main() {
    Square s(4);
    s.print();

    s.set_side(2.0);
    s.print();

    s.set_side(-33.0);
    s.print();

    return 0;
}
