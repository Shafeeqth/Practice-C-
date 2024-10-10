#include <iostream>
// Declare Person class
class Person {
    public:
        std::string name;
        int age;
};

int main(int argc, char const *argv[])
{
    // Instantiate class object - person1
    Person person1;
    person1.name = "Ahammed";
    person1.age = 50;
    std::cout << person1.name;
    return 0;
}
