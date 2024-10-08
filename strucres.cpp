#include <iostream>

int main() {

    // Basic Strucure
    struct {
        std::string name; //members of struct
        int age;
        std::string place;
    } person;

    person.name = "shafeeque";
    person.age = 24;
    person.place = "kerala";
    
    std::cout << person.age;

    // Struct with multiple variables
    struct {
        std::string name;
        int sides ;

    } triangle, square , cube;

    triangle.name = "Triangle";
    triangle.sides = 3;

    square.name = "Square";
    square.sides = 4;

    cube.name = "Cube";
    cube.sides = 6;

    //Named structs 
    struct car {
        std::string brand;
        std::string model;
        int price;
    };

    //declare variable to use car stuct
    car myCar;
    myCar.model = "X5";
    myCar.brand = "BMW";
    myCar.price = 1000000;

    




    return 0;
}