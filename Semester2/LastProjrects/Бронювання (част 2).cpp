#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Flight {
public:
    Flight(int totalCapacity) {
        if (totalCapacity <= 0) {
            cerr << "Error: Total capacity must be positive." << endl;
            totalCapacity = 0; // Set to 0 as a default for invalid input
        }
        this->totalCapacity = totalCapacity;
        reservedSeats = 0;
    }

    bool addReservations(int numReservations) {
        if (numReservations <= 0) {
            return true; // No change for non-positive additions
        }

        int newReserved = reservedSeats + numReservations;
        if (newReserved > totalCapacity * 1.05) {
            cerr << "Cannot perform this operation: Maximum booking capacity (105%) reached." << endl;
            return false;
        }

        reservedSeats = newReserved;
        return true;
    }

    bool cancelReservations(int numReservations) {
        if (numReservations <= 0) {
            return true; // No change for non-positive cancellations
        }

        int newReserved = reservedSeats - numReservations;
        if (newReserved < 0) {
            cerr << "Cannot perform this operation: Cannot cancel more reservations than booked." << endl;
            return false;
        }

        reservedSeats = newReserved;
        return true;
    }

    int getAvailableSeats() const {
        return totalCapacity - reservedSeats;
    }

    void displayStatus() const {
        cout << "Total Capacity: " << totalCapacity << endl;
        cout << "Reserved Seats: " << reservedSeats << endl;
        cout << "Available Seats: " << getAvailableSeats() << endl;
    }

private:
    int totalCapacity;
    int reservedSeats;
};

int main() {
    int totalCapacity;

    cout << "Enter the total capacity of the flight: ";
    while (!(cin >> totalCapacity) || totalCapacity <= 0) {
        cin.clear(); // Clear the error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Error: Invalid input. Please enter a positive integer: ";
    }

    Flight flight(totalCapacity);

    string command;
    int num;

    while (command != "quit") {
        cout << "\nAvailable commands: add [n], cancel [n], quit" << endl;
        cout << "Enter command: ";
        cin >> command;

        if (command == "add" || command == "cancel") {
            cout << "Enter number: ";
            cin >> num;
            while (cin.fail()) { // Input validation for numbers
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error: Invalid input. Please enter an integer: ";
                cin >> num;
            }

            if (command == "add") {
                if (!flight.addReservations(num)) {
                    cout << "Reservation limit reached." << endl;
                }
            } else {
                if (!flight.cancelReservations(num)) {
                    cout << "Cancellation exceeds booked seats." << endl;
                }
            }
        } else if (command != "quit") {
            cout << "Invalid command. Please try again." << endl;
        }

        flight.displayStatus();
    }

    cout << "Exiting program." << endl;

    return 0;
}
