#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Please enter your marks: " << endl;

    int x;
    cin >> x;

    if (x < 25) {
        cout << "Your grade is F" << endl;
    }
    else if (x >= 25 && x < 45) {
        cout << "Your grade is E" << endl;
    }
    else if (x >= 45 && x < 50) {
        cout << "Your grade is D" << endl;
    }
    else if (x >= 50 && x < 60) {
        cout << "Your grade is C" << endl;
    }
    else if (x >= 60 && x < 80) {
        cout << "Your grade is B" << endl;
    }
    else {
        cout << "Your grade is A" << endl;
    }

    return 0;
}
