// ch3movieTheaterBoxOfficeRevenue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    std::cout << "Ch 3 Box Office Revenue by Kevin Bell\n\n";
    string movie;
    auto adultTicket = 10.0, childTicket = 6.0, totalSalesAdults=0.0, totalSalesChildren=0.0, grossTotal=0.0, distributorEarnings=0.0, movieTheaterEarnings=0.0;
    auto adults=0, children=0;
    cout << "What is the name of the movie? ";
    cin >> movie;
    cout << "How many adult tickets sold? ";
    cin >> adults;
    cout << "How many child tickets sold? ";
    cin >> children;
    cout << "\n";
    cout << "Movie Name: " << movie << endl;
    totalSalesAdults = adultTicket * adults;
    totalSalesChildren = childTicket * children;
    cout << "Adult Tickets Sales:      $" << setprecision(2) << fixed << totalSalesAdults << endl;
    cout << "Children Tickets Sales:   $" << setprecision(2) << fixed << totalSalesChildren << endl;
    grossTotal = totalSalesAdults + totalSalesChildren;
    cout << "Gross Box Office Revenue: $" << setprecision(2) << fixed << grossTotal << endl;
    distributorEarnings = grossTotal * .2;
    movieTheaterEarnings = grossTotal * .8;
    cout << "Amount to Distributor:    $" << setprecision(2) << fixed << distributorEarnings << endl;
    cout << "Net Box Office Revenue:   $" << setprecision(2) << fixed << movieTheaterEarnings << endl;
    cout << "\n";
    //Keep window open til done
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
