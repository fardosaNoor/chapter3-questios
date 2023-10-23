#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    string name_of_movie;
    int adult_tickets, child_tickets;
    const float adult_ticket_price = 10.00,
                child_ticket_price = 6.00;
    
    float gross_profit, net_profit, distributer_cut;
        
    //ask the user the name of the movies
    cout << "What is the name of the movie\n";
    getline(cin, name_of_movie);

    //adult tickets sold
    cout << "How many adult tickets were sold\n";
    cin >> adult_tickets;

    //child tickets sold
    cout << "how many child tickets were sold \n";
    cin >> child_tickets;

    gross_profit = (adult_tickets *adult_ticket_price) + (child_tickets * child_ticket_price);

    net_profit = 0.2 *gross_profit;
    distributer_cut = gross_profit - net_profit;

    cout <<setprecision(2) <<fixed;

    cout << "\nMovie name: \t" << setw(10) << name_of_movie;
    cout << "\nAdult tickets sold: \t" << setw(10) << adult_tickets;
    cout << "\nChild Tickets sold: \t" << setw(10) << child_tickets;
    cout << "\nGross Box Office Profit \t" << setw(10) << gross_profit;
    cout << "\nNet Box Office Profit \t" << setw(10) << net_profit;
    cout << "\nAmout Paid to Distributor" << setw(10) <<distributer_cut;



    //terminate programclear

    return 0;
}

