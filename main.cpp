#include <iostream> // Standard Input Output library for C++
#include "exercises.h" // Including the header file for exercise functions

using namespace std;

//Main function - Entry point of the program
int main()
{
    // Initializing an integer array
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int n = v.size(); // Calculating the number of elements in the vector

    // Testing various functions
    cout << "soma_n(10): " << soma_n(10) << endl; // Expected output: 55
    cout << "power(2,4): " << power(2, 4) << endl; // Expected output: 16

    // Reverse the vector using inverte_vetor function
    inverte_vetor(v, 0, v.size() - 1);
    cout << "Reversed vector: ";
    for (int num : v) {
        std::cout << num << " "; // Expected output: 7 6 5 4 3 2 1
    }
    std::cout << std::endl;

    // Testing the greatest commom divisor function
    cout << "mdc(9, 12): " << mdc(9, 12) << endl; // Expected output: 3

    // Testing the multiplication function
    cout << "mult(8, 9): " << multiplica(8, 9) << endl; // Expected output: 72

    // Testing the search function in the array
    int searchValue = 10;
    int index = busca(v, n, searchValue);

    if (index != -1) {
        cout << "Value " << searchValue << " found at index: " << index << endl;
    } else {
        cout << "Value " << searchValue << " not found in the array." << endl;
    }

    // Testing the bit shifting operations
    cout << "11 << 1 (Shift left): " << (11 << 1) << endl; // Expected output: 22
    cout << "10 >> 1 (Shift right): " << (10 >> 1) << endl; // Expected output: 5

    // Calculate the number of 1-bits in the binary representation of 15
    cout << "Number of 1-bits in 15 (bitwise): " << somabits_operador_binario(15) << endl; // Expected output: 4
    cout << "Number of 1-bits in 15 (modulo): " << somabits(15) << endl; // Expected output: 4

    return 0;
}
