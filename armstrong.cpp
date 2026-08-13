#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int sum = 0;
    int digit;
    int original = a;

    while (a != 0) {
        digit = a % 10;
        sum=sum + digit * digit * digit;
        a = a / 10;
    }

   cout << "sum: " << sum << endl;

if (sum == original) {
    cout << "Armstrong number";
}
else {
    cout << "Not Armstrong number";
}
    return 0;
}