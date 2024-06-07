#include <iostream>
#include <string>

using namespace std;

class IPAddress {
protected:
    string ip;

public:
    IPAddress(const string& address) : ip(address) {}
    IPAddress(const IPAddress& other) : ip(other.ip) {}

    void print() const {
        cout << ip << endl;
    }
};

class IPAddressChecked : public IPAddress {
private:
    bool correct;

public:
    IPAddressChecked(const string& address, bool isCorrect) : IPAddress(address), correct(isCorrect) {}

    IPAddressChecked(const IPAddressChecked& other) : IPAddress(other), correct(other.correct) {}

    void print() const {
        IPAddress::print();
        cout << (correct ? " - Correct" : " - Not Correct") << endl;
    }
};

int main() {
    IPAddress ip1("1.2.3.4");
    IPAddressChecked ip2("999.29.29.29", false);
    IPAddressChecked ip3("199.29.29.29", true);

    ip1.print();
    ip2.print();
    ip3.print();

    return 0;
}
