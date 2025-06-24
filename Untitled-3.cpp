#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;
    
    // Take input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Output the reversed number
    cout << "Reversed number: " << reversedNum << endl;
   

    return 0;
}
