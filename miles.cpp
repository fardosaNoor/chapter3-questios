#include <iostream>
using namespace std;

//ask the number of galllons the car can hold
// the number of miles it can be driven on full tank
//the number of miles that may be driven per gallon if gas 

int main ()
{
    int number_of_gallons,number_of_miles, miles_per_gallon;

    cout << "What is the number of gallons the car can hold ";
    cin >> number_of_gallons;

    cout << "What is the number of miles it can be driven on full tank ";
    cin >> number_of_miles;

    miles_per_gallon = (number_of_miles / number_of_gallons);

    cout << "The miles per gallon = " << miles_per_gallon;

    return 0;
}