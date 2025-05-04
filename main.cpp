
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    
    const double small_room_price = 25;
    const double large_room_price = 35;
    const double tax_rate = 0.06;
    const int estimate_validity_days = 30;

    cout << "Welcome to PoPo's Car Washing Service" << endl;
    cout << "Estimate for car washing service" << endl;
    cout << "\nHow many number of small cars would you like washed? ";
    int number_of_small_cars = 0;
    cin >> number_of_small_cars;
    cout << endl;
    cout << "How many number of large cars would you like washed? ";
    int number_of_large_cars = 0;
    cin >> number_of_large_cars;

    cout << "Cost: $" << number_of_small_cars * small_room_price + number_of_large_cars * large_room_price << endl;
    cout << "Tax: $" << (number_of_small_cars * small_room_price + number_of_large_cars * large_room_price) * tax_rate << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << (number_of_small_cars * small_room_price + number_of_large_cars * large_room_price) + ((number_of_small_cars * small_room_price + number_of_large_cars * large_room_price) * tax_rate) << endl;
    cout << "This estimate is valid for "<< estimate_validity_days <<" days" << endl;
    cout << "Thank you for using PoPo's Car Washing Service" << endl;
    cout << "Have a nice day!" << endl;
    cout << "====================================" << endl;


 
    cout << endl;
    return 0;
}

