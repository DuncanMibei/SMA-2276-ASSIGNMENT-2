#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    int age;
    string firstName;
    string lastName;
public:

    Person(int g, string fn, string ln) : age(g), firstName(fn), lastName(ln) {}


    void getValues() {
        cout << "First Name: " << firstName << "\nLast Name: " << lastName << "\nAge:" << age << endl;
    }
    void setValues(int g, string fn, string ln) {
        age = g;
        firstName = fn;
        lastName = ln;
    }
};

int main() {

    Person obj(21, "Duncan", "Mibei");

    obj.getValues();

    obj.setValues(26, "Paul", "Bett");

    obj.getValues();

    return 0;
}
