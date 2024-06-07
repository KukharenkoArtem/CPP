#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <unordered_map>

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
            cerr << "Cannot perform this operation: Maximum booking capacity (105%) reached for flight " << getId() << "." << endl;
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
            cerr << "Cannot perform this operation: Cannot cancel more reservations than booked for flight " << getId() << "." << endl;
            return false;
        }

        reservedSeats = newReserved;
        return true;
    }

    int getAvailableSeats() const {
        return totalCapacity - reservedSeats;
    }

    void displayStatus() const {
        cout << "Flight ID: " << getId() << endl;
        cout << "Total Capacity: " << totalCapacity << endl;
        cout << "Reserved Seats: " << reservedSeats << endl;
        cout << "Available Seats: " << getAvailableSeats() << endl;
    }

    int getId() const { return id; }

private:
    int id; // Unique identifier for the flight
    int totalCapacity;
    int reservedSeats;
};

int main() {
    const int MAX_FLIGHTS = 10;
    vector<Flight> flights(MAX_FLIGHTS); // Array to store flights
    unordered_map<int, int> flightIndex; // Map flight ID to its index in the array

    int nextFlightId = 1; // Track next available flight ID

    string command;
    int id, num;

    while (command != "quit") {
        cout << "\nAvailable commands:" << endl;
        cout << "create [id] [cap] - Create a new flight" << endl;
        cout << "delete [id] - Remove a flight" << endl;
        cout << "add [id] [n] - Add reservations to a flight" << endl;
        cout << "cancel [id] [n] - Cancel reservations from a flight" << endl;
        cout << "quit - Exit program" << endl;
        cout << "\nEnter command: ";
        cin >> command;

        if (command == "create") {
            cin >> id >> num;
            if (id <= 0 || num <= 0) {
                cout << "Cannot perform this operation: Invalid flight ID or capacity." << endl;
                continue;
            }

            // Check if flight ID is already taken or maximum number of flights reached
            if (flightIndex.count(id) > 0 || flightIndex.size() == MAX_FLIGHTS) {
                cout << "Cannot perform this operation: Flight ID already exists or maximum number of flights reached." << endl;
                continue;
            }

            // Create a new flight and store its index in the map
            int flightIndexValue = flightIndex.size();
            flights[flightIndexValue] = Flight(num);
            flightIndex[id] = flightIndexValue;
            nextFlightId = max(nextFlightId, id + 1); // Update next available ID
            cout << "Flight " << id << " created successfully." << endl;
        } else if (command == "delete") {
            cin >> id;
            if (id <= 0) {
                cout << "Cannot perform this operation: Invalid flight ID." << endl;
                continue;
            }
