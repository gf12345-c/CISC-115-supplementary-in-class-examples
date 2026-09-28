#include <iostream>
using namespace std;

int main() {
    // Prompt user for their age and output "You can vote" if they are at least 18.
int age;
cout << "Enter Your Age: ";
cin >> age;
if (age >= 18)
cout << "You can vote" << endl;
    return 0;
}