#include <iostream>

int main() {
    int* test_array = NULL;
    long x = 0;
    long& array_size = x;

    std::cout << "Hello, traveler! Please enter a large number:" << std::endl;
    std::cin >> array_size; // Gets array size from user

    while (array_size != 0) {

        try {
            test_array = new int[array_size];   // Creates array
            for (int i = 0; i < array_size; i++) {
                test_array[i] = 0;              // initializes array to 0
            }

            delete[] test_array;
            std::cout << "Bigger next time! Enter 0 to stop." << "\n";

            std::cin >> array_size;
        }
        catch (const std::exception &e){
            std::cout << "Too big! Smaller next time. Enter 0 to stop." << "\n";
        }
    }

    return 0;
}