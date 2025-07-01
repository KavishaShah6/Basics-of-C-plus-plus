#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "Please enter your age :" << endl;
    cin >> age ;
    if(age < 18){
        cout << "You are not eligible" << endl;
    }
    else if( age >=18 && age <=54){
        cout << "You are eligible" << endl;
    }
    else if (age >= 55 && age <= 57)
    {
        cout << "You are not eligible for the job but retirement soon" << endl;
    }
    else if (age > 57) {
        cout << "Retirement time" << endl;
    }
    return 0;
}