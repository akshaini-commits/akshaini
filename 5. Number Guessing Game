#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if(original == reversed) {
        cout << "Palindrome number";
    } else {
        cout << "Not a palindrome";
    }

    return 0;
}
