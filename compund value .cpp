#include <iostream>
#include <cmath>

double calculateCompoundInterest(double principal, double rate, int time) {
    // Calculate compound interest using the formula: A = P(1 + r/n)^(nt)
    // Where:
    // A = the future value of the investment/loan, including interest
    // P = the principal investment amount (the initial deposit or loan amount)
    // r = the annual interest rate (decimal)
    // n = the number of times that interest is compounded per unit 't'
    // t = the time the money is invested for in years
    return principal * std::pow((1 + rate/100), time) - principal;
}

int main() {
    double principal, rate;
    int time;

    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the rate of interest (annual percentage): ";
    std::cin >> rate;

    std::cout << "Enter the time (in years): ";
    std::cin >> time;

    double compoundInterest = calculateCompoundInterest(principal, rate, time);

    std::cout << "Compound interest after " << time << " years: " << compoundInterest << std::endl;

    return 0;
}
