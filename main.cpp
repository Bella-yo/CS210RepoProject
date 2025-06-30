#include <iostream>
#include <limits>
#include <vector>
#include "InvestmentCalculator.h"

// Utility: prompts for a positive double
double promptPositiveDouble(const std::string& prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value && value >= 0) {
            break;
        }
        std::cout << "Invalid input. Please enter a non-negative number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return value;
}

// Utility: prompts for a positive integer
int promptPositiveInt(const std::string& prompt) {
    int value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value && value > 0) {
            break;
        }
        std::cout << "Invalid input. Please enter a positive integer.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return value;
}

int main() {
    try {
        std::cout << "=== Airgead Banking Investment Growth Calculator ===\n";

        double initialInvestment = promptPositiveDouble("Enter initial investment amount: $");
        double monthlyDeposit = promptPositiveDouble("Enter monthly deposit amount: $");
        double annualInterest = promptPositiveDouble("Enter annual interest rate (percent): ");
        int years = promptPositiveInt("Enter number of years: ");

        std::cout << "\nPress Enter to continue...";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();

        InvestmentCalculator calc(initialInvestment, monthlyDeposit, annualInterest, years);

        // Report without deposits
        auto balancesNo = calc.calculateBalancesWithoutDeposits();
        auto interestsNo = calc.calculateInterestsWithoutDeposits();
        std::cout << "\n--- Balance and Interest Without Additional Monthly Deposits ---\n";
        std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
        for (int i = 0; i < years; ++i) {
            std::cout << i + 1 << "\t$" << balancesNo[i] << "\t$" << interestsNo[i] << "\n";
        }

        // Report with deposits
        auto balancesWith = calc.calculateBalancesWithDeposits();
        auto interestsWith = calc.calculateInterestsWithDeposits();
        std::cout << "\n--- Balance and Interest With Additional Monthly Deposits ---\n";
        std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
        for (int i = 0; i < years; ++i) {
            std::cout << i + 1 << "\t$" << balancesWith[i] << "\t$" << interestsWith[i] << "\n";
        }

    }
    catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << "\n";
        return 1;
    }

    return 0;
}