#include <iostream>
#include <iomanip>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus() const;

private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved)
    : id(id), capacity(capacity), reserved(reserved) {
    if (capacity <= 0 || reserved < 0) {
        cerr << "Error: Capacity and reserved seats cannot be negative." << endl;
    }
}

void FlightBooking::printStatus() const {
    double percentage = static_cast<double>(reserved) / capacity * 100;

    cout << fixed << setprecision(2);
    cout << "Flight " << id << " : " << reserved << "/" << capacity << " ("
         << percentage << "%) seats reserved" << endl;
}

int main() {
    int capacity, reserved;

    cout << "Provide flight capacity: ";
    cin >> capacity;

    cout << "Provide number of reserved seats: ";
    cin >> reserved;

    FlightBooking booking(1, capacity, reserved);
    booking.printStatus();

    return 0;
}
