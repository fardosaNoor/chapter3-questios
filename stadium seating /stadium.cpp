#include <iostream>
#include <iomanip>
using namespace std;

// three categories: class a = 15, class b = 12, class c = 9
//ask how many tickets for each class of seats were sold
//display the amount of income generated 
//fixed point notation
//two decimal place precision

int main ()
{
    int class_a_tickets, class_b_tickets, class_c_tickets;
    float class_a = 15.00, class_b = 12.00, class_c = 9.00, total_income;

    cout << "How many tickets of each class were sold in total\n";
    cout << "Class A tickets = ";
    cin >> class_a_tickets;
    cout << "Class B tickets = ";
    cin >> class_b_tickets;
    cout << "Class C tickets = ";
    cin >> class_c_tickets;

    total_income = (class_a_tickets * class_a)+(class_b_tickets * class_b) + (class_c_tickets * class_c);
    
    cout << setprecision(2) << fixed;
    cout <<"The amount of income generated = $\n";
    cout << setw(6) << total_income;

    return 0;

}