#include <iostream>

using namespace std;

double taxcalc(double, double, double);

int main(){
    double sales,stateTax,countyTax, totaltax;

    cout << "Enter the amount of sales made:₨ ";
    cin >> sales;
    cout << "Enter the State Tax percentage: ";
    cin >> stateTax;
    cout << "Enter the County Tax percentage: ";
    cin >> countyTax;

    taxcalc(sales, stateTax, countyTax);
}

double taxcalc(double sales, double stateTax, double countyTax){
    double totalTax = 0;
    stateTax = sales*(stateTax/100);
    countyTax = sales*(countyTax/100);
    totalTax = stateTax+countyTax;

    printf("State tax is:₨ %f\n", stateTax);
    printf("County tax is:₨ %f\n", countyTax);
    printf("The total tax is:₨ %f\n", totalTax);
}