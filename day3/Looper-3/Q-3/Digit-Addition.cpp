#include <iostream>
using namespace std;

int main() {
    int num, firstDigit, lastDigit;

   
    cout << "Enter a number: ";
    cin >> num;

   
    lastDigit = num % 10;

    
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;
    cout << "Sum of the first and last digits: " << sum << endl;

    return 0;
}