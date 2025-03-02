#include <iostream>

int main() {
    int num1, num2, num3;

    // Prompt user for input
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    // Dynamic memory allocation
    int* ptr1 = new int(num1);
    int* ptr2 = new int(num2);
    int* ptr3 = new int(num3);

    // Display values
    std::cout << "\nValues entered: " << num1 << ", " << num2 << ", " << num3 << std::endl;
    std::cout << "Pointer values: " << *ptr1 << ", " << *ptr2 << ", " << *ptr3 << std::endl;

    std::cout << "\nMemory addresses:" << std::endl;
    std::cout << "ptr1: " << ptr1 << "\nptr2: " << ptr2 << "\nptr3: " << ptr3 << std::endl;

    // Free allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    std::cout << "\nMemory has been freed." << std::endl;

    return 0;
}
