#include <iostream>
using namespace std;

const double rise_rate = 1.5; // rise rate in millimeters per year

int main() {
    double rise_in_5_years = rise_rate * 5;
    double rise_in_7_years = rise_rate * 7;
    double rise_in_10_years = rise_rate * 10;

    cout << "Ocean level rise in 5 years: " << rise_in_5_years << " mm" << endl;
    cout << "Ocean level rise in 7 years: " << rise_in_7_years << " mm" << endl;
    cout << "Ocean level rise in 10 years: " << rise_in_10_years << " mm" << endl;

    return 0;
}

