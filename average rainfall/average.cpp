#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    string month1, month2,month3, month4, month5, month6, month7, month8, month9, month10, month11, month12;

    float month1rainfall, month2rainfall, month3rainfall, month4rainfall, month5rainfall, month6rainfll, month7rainfall, month8rainfall, month9rainfall, month10rainfall, month11rainfall, month12rainfall;

    double average_rainfall, total;

    //ask the user to enter the name of each month
    cout << "This program calculates the average rainfall \n";
    cout << "Press enter to continue\n";

    cin.get();
    cout << endl;

    cout << "Name oof month 1 :\t" << "Rainfall in inches\n";
    cin >> month1 >> month1rainfall;
   
    cout << "Name oof month 2 :\t" << "Rainfall in inches\n";
    cin >> month2 >>month2rainfall;
    cout << "Name oof month 3 :\t" << "Rainfall in inches\n";
    cin >> month3 >>month3rainfall;
    cout << "Name oof month 4 :\t" << "Rainfall in inches\n";
    cin >> month4 >>month4rainfall;
    cout << "Name oof month 5 :\t" << "Rainfall in inches\n";
    cin >> month5 >>month5rainfall;
    cout << "Name oof month 6 :\t" << "Rainfall in inches\n";
    cin >> month6 >>month6rainfll;
    cout << "Name oof month7 :\t" << "Rainfall in inches\n";
    cin >> month7 >>month7rainfall;
    cout << "Name oof month 8 :\t" << "Rainfall in inches\n";
    cin >> month8 >>month8rainfall;
    cout << "Name oof month 9 :\t" << "Rainfall in inches\n";
    cin >> month9 >>month9rainfall;
    cout << "Name oof month 10 :\t" << "Rainfall in inches\n";
    cin >> month10 >> month10rainfall;
    cout << "Name oof month 11 :\t" << "Rainfall in inches\n";
    cin >> month11 >> month11rainfall;
    cout << "Name oof month 12:\t" << "Rainfall in inches\n";
    cin >> month12 >>month12rainfall;

    cout <<setprecision(2) <<fixed;
    total = month11rainfall +month6rainfll + month12rainfall;
    average_rainfall = total / 3;
    cout << "The average rain for :\t " <<month1 << "," <<month6 <<"and" <<month12 << setw(6) <<average_rainfall; 
  




    //terminate programm
    return 0;
}