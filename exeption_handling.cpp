#include <iostream>

int main(int argc, char const *argv[])
{   
    int age;
    std::cout << "Enter your age";
    std::cin >> age;
    try
    {
        if(age >= 60) {
           std::cout << "Access granted, Take care of your body papa \n";
        } else if (age > 18) { 
            std::cout << "Access granted, You are old enough to enter, Gentil main!";
        } else {
            throw (age);
        }
    }
    catch(...)
    {
        std::cerr << "Access denied. You are a minor " << '\n';
    }
    
    return 0;
}
