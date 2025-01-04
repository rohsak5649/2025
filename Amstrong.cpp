#include <iostream>
using namespace std;

int main() {
    int number, originalNumber;
    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;
    int digits[10];
    int cubes[10];
    int count = 0;
    int sumOfCubes = 0;

    while (number > 0) {
        int digit = number % 10;
        digits[count] = digit;
        cubes[count] = digit * digit * digit;
        sumOfCubes += cubes[count];
        count++;
        number /= 10;
    }

    cout << "Digits: ";
    for (int i = count - 1; i >= 0; i--) {
        cout << digits[i] << " ";
    }

    cout << "\nCubes of digits: ";
    for (int i = count - 1; i >= 0; i--) {
        cout << cubes[i] << " ";
    }

    if (sumOfCubes == originalNumber) {
        cout << "\nIt is an Armstrong number." << endl;
    } else {
        cout << "\nIt is not an Armstrong number." << endl;
    }

    return 0;
}
