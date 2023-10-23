#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{

    const float 
        cookies = 48, 
        sugar =1.5, 
        butter = 1, 
        flour= 2.75; 
    float cup_of_sugar, cup_of_butter, cup_of_flour, num_cookies;

    //ask the user how many cookies they want ot make 
    cout << "How many cookies do you want to make \n";
    cin >> num_cookies;

    cup_of_sugar = (sugar *num_cookies) / cookies;
    cup_of_butter = (butter * num_cookies) / cookies;
    cup_of_butter = (flour * num_cookies) / cookies;

    cout <<"To make " <<num_cookies <<"cookies you will need \n";
    cout << "." << cup_of_sugar <<"cup of sugar \n";
    cout << "." << cup_of_butter << "cup of butter\n";
    cout << "." << cup_of_flour << "cup of flour\n";



    //terminate program
    return 0;
}