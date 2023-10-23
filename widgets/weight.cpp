#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    const float widget_weight = 12.5;
    float pallet_weight, 
        pallet_plus_widget, 
        number_of_widgets;
    //ask the user how much the pallet weights by itself
    cout << "How much does the pallet weght by itself\n";
    cin >> pallet_weight;

    //how much the pallet and widgtes weight
    cout << "how much do the pallet and the widgets weigth\n";
    cin >> pallet_plus_widget;

    number_of_widgets = (pallet_plus_widget - pallet_weight)/ widget_weight;

    cout << "The number of widgets:\t" << number_of_widgets;



    //terminate the program
    return 0;
}