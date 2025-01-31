#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <iostream>
using namespace std;

double find_rate(string abbreviation);

void convert(double foreign, double rate, double& dollars);

#endif