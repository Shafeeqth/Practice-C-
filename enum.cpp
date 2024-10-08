#include <iostream>

int main() {

    //Declare enum
    enum Level {
        LOW,
        MEDIUM,
        HIGH
    
    };

    //use enum
    enum Level level = MEDIUM;
    std::cout << MEDIUM << "\n"; // 1

    enum Level1 {
        BAD = 25,
        GOOD = 50,
        BETTER = 75,
    };
    enum Level1 level1 = BETTER;
    std::cout << level1 << "\n"; //75

    //Specify value to one element
    enum Portion {
        THIRD = 3, //3
        FOURTH, // 4
        FIFTH, // 5
        SIXTH, // 6
    };

    return 0;
}