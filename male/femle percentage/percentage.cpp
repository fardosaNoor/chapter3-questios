#include <iostream>
#include <iomanip>
 using namespace std;

 int main ()
 {
    //ask the user for the number of males and number of female registered 
    int number_of_males, number_of_females, total;
    float malePercentage, femalePercentage;

    cout <<"This program clculates percentages\n";
    cout << "Press enter to continues\n";
    cin.get();
    cout <<endl;

    cout << "Enter the number of males \n";
    cin >> number_of_males;

    cout << "Enter the number of females \n";
    cin >> number_of_females;

    total = number_of_females + number_of_males;

    malePercentage = (number_of_males / static_cast<float> (total)) * 100;
    femalePercentage = number_of_females / static_cast<float>(total);
    cout << "Percentage of males : \t" << malePercentage <<endl;
    cout << "Percentage of femels: \t" << femalePercentage;

    //terminate the program
    return 0;
 }