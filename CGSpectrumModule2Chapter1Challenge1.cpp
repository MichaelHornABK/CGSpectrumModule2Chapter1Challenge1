#include <iostream>

int main()
{
    int a;
    std::cout << "What is integer a? ";
    std::cin >> a;

    int b;
    std::cout << "What is integer b? ";
    std::cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    std::cout << "The value stored in ptrA is: " << *ptrA << std::endl;
    std::cout << "The value stored in ptrB is: " << *ptrB << std::endl;

}