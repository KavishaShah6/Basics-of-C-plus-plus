#include<bits/stdc++.h>
using namespace std;

void checkEvenOdd(int num1) {
    if (num1 % 2 == 0) {
        cout << "It is even";
    } else {
        cout << "It is odd";
    }
}

int main() {
    int num1;
    cout << "Enter the number: ";
    cin >> num1;

    checkEvenOdd(num1);  

    return 0;
}
