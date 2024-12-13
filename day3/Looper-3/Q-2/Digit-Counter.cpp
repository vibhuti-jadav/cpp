#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    long long num; 
    int digitCount = 0;

    cout << "Enter a number: ";
    cin >> num;

   
    if (num == 0) {
        cout << "The number has 1 digit." << endl;
        return 0;
    }

  
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        num /= 10;
        digitCount++;
    }

    cout << "Total number of digits: " << digitCount << " digits." << endl;
    
    return 0;
}