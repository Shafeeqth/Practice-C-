#include <iostream>
   void swapNumbers(int &n1, int &n2){
        int n3 = n2;
        n2 = n1;
        n1 = n3;
    };

int main(int argc, char const *argv[])
{
    int number1 = 100;
    int number2 = 200;

    std::cout << "Numbers before swap " << number1 << " " << number2 << "\n";
    swapNumbers(number1, number2);
    std::cout << "Numbers after swap " << number1 << ' ' << number2 << "\n";

 

    return 0;
}
