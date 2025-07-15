#include<bits/stdc++.h>
using namespace std;
int square(int num1) {
    int res = num1 * num1;
    return res;
}

int main() {
    int num1;
    cout << "Enter the number: ";
    cin >> num1;  

    int res = square(num1);
    cout << "The square is: " << res;

    return 0;
}
