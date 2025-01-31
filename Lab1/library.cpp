#include "library.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double find_rate(string abbreviation)
{
    ifstream rateFile;

    rateFile.open("rates.txt");

    string foreign;
    double rate;

    if (!rateFile.is_open())
    {
        cout << "failed to open rate.txt" << endl;
        return 0;
    }

    while (rateFile >> foreign >> rate)
    {
        //  cout << "[" << foreign << "]" << " [" << abbreviation << "] " << endl;
        if (foreign == abbreviation)
        {
            return rate;
        }
    }
    rateFile.close();

    return -1;  // abbreviation not found, return negative
};

void convert(double foreign, double rate, double& dollars)
{
    if (rate != -1)
    {
        dollars = foreign / rate;
    }
    // cout << rate << endl;
};
