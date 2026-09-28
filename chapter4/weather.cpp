#include <iostream>
using namespace std;

int main() {
    // Write a program that takes a temperature (int) and a string corresponding to the weather condition (e.g., "sunny", "rainy", "cloudy").
    // The program should output the following:
    //   * If the weather is "rainy" and the temperature is below 50, output "Stay inside"
    //   * If the weather is "rainy" and the temperature is at least 50, output "Bring an umbrella"
    //   * If it is not "rainy", output "Enjoy the day"
int temperature;
string condition;
cout << "Enter Temperature: " << endl;
cin >> temperature;
cout << "Enter Condition: " << endl;
cin >> condition;
if ((condition == "rainy")&&(temperature < 50)) {
cout << "Stay inside" << endl;
}
else if ((condition == "rainy")&&(temperature <= 50)) {
cout << "Bring an umbrella" << endl;
}
else {
cout << "Enjoy the Day" << endl;
}
    return 0;
}