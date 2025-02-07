#include "library.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ifstream transactionsFile;
    transactionsFile.open("transactions.txt");
    if (!transactionsFile.is_open())
    {
        cout << "Error: Could not open transactions.csv file." << endl;
        return 1;
    }
    cout << fixed << setprecision(2);

    cout << left << setw(15) << "Transaction"
        << setw(17) << "Foreign Amount"
        << setw(18) << "Currency Name"
        << setw(15) << "US Dollars" << endl;
    cout << string(65, '-') << endl;

    int n = 1;
    string line;

    while (getline(transactionsFile, line))
    {
        size_t p1 = line.find(',');
        string abbreviation = line.substr(0, p1);
        int transactions = n++;

        double rate = find_rate(abbreviation);

        size_t p2 = line.find(',', p1 + 1);
        string currency = line.substr(p1 + 1, p2 - p1 - 1);

        double foreign = stod(line.substr(p2 + 1));

        //cout << abbreviation << foreign << currency << rate << endl;
        double dollars = '\0';

        convert(foreign, rate, dollars);

        cout << left << setw(15) << transactions
            << setw(17) << foreign
            << setw(18) << currency
            << setw(15);

        if (rate == -1) {
            cout << "Sorry. no matching currency for " << abbreviation;
        }
        else {
            cout << dollars;
        }
            cout << endl;
    }

    transactionsFile.close();
    return 0;
}
