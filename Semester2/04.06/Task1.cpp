#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name1, name2;
    int age1, age2;
    void greet() {
        cout << "Привіт, мене звати " << name1 << endl;
        cout << "Привіт, мене звати " << name2 << endl;
    }
};

void print(Person* person) {
    cout << person->name1 << " is " << person->age1 << " years old" << endl;
    cout << person->name2 << " is " << person->age2 << " years old" << endl;
}

int main() {
    Person person;
    person.name1 = "Artem";
    person.age1 = 20;
    person.name2 = "Harry";
    person.age2 = 23;

    cout << "Знайомтесь, " << person.name1 << endl;
    cout << "Знайомтесь, " << person.name2 << endl;
    print(&person);
    person.greet();
    return 0;
}
