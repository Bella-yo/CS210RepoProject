#ifndef AIRGEAD_INVESTMENT_CALCULATOR_H_
#define AIRGEAD_INVESTMENT_CALCULATOR_H_

#include <vector>

class InvestmentCalculator {
public:
    // Constructor initializes inputs
    InvestmentCalculator(double t_initialAmount,
        double t_monthlyDeposit,
        double t_annualInterestRate,
        int t_years);

    // Calculates and returns vector of year-end balances without monthly deposits
    std::vector<double> calculateBalancesWithoutDeposits() const;

    // Calculates and returns vector of year-end interests without monthly deposits
    std::vector<double> calculateInterestsWithoutDeposits() const;

    // Calculates and returns vector of year-end balances with monthly deposits
    std::vector<double> calculateBalancesWithDeposits() const;

    // Calculates and returns vector of year-end interests with monthly deposits
    std::vector<double> calculateInterestsWithDeposits() const;

private:
    double m_initialAmount;
    double m_monthlyDeposit;
    double m_annualInterestRate;
    int m_years;
};

#endif  // AIRGEAD_INVESTMENT_CALCULATOR_H_