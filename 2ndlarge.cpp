#include <iostream>

using namespace std;

int main() {
    long long a;
    cin >> a;

    a = a < 0 ? -a : a;
    int largest = -1, secondLargest = -1;

    if (a == 0) {
        cout << "No second largest digit";
        return 0;
    }

    while (a > 0) {
        int digit = a % 10;
        if (digit > largest) {
            secondLargest = largest;
            largest = digit;
        } else if (digit > secondLargest && digit < largest) {
            secondLargest = digit;
        }
        a /= 10;
    }

    if (secondLargest == -1)
        cout << "No second largest digit";
    else
        cout << secondLargest;
}
