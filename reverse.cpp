#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int rev = 0;
    int digit;

    while (a != 0) {
        digit = a % 10;
        rev = rev * 10 + digit;
        a = a / 10;
    }

    cout << "reversed:" << rev;

    return 0;
}