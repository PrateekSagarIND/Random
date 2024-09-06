#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class InflationRate {
    // Implementation to read and store inflation data from CSV
};

class TaxRate {
    // Implementation to handle tax rates and calculations
};

class Property {
    double initialCost;
    InflationRate inflation;
    TaxRate taxRate;

public:
    Property(double cost, const InflationRate& inf, const TaxRate& tax);
    double computeSellingPrice(int year) const;
    double computeLTCG(int year) const;
    double computeLTCGWithNewTax(int year) const;
};

// Function implementations

int main() {
    // Load data from CSV
    // Instantiate classes
    // Perform calculations and print results
    return 0;
}
