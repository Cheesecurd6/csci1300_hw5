#include <iostream>

using namespace std;

int daysToFund(int startBalance, int dailyDeposit) {
    int vaultGoal = 42500;
    int days = 0;
    while (startBalance < vaultGoal) {
        startBalance += dailyDeposit;
        days++;
        cout << "Day " << days << ": deposited " << dailyDeposit << ", balance now " << startBalance << endl;
    }
    return days;
}

int main() {
    int startingBalance;
    int dailyDeposit;
    int days;
    cout << "Enter the starting Vault balance: ";
    cin >> startingBalance;
    cout << "Enter the daily deposit amount: ";
    cin >> dailyDeposit;
    cout << "--- Vault Savings Plan ---" << endl;
    days = daysToFund(startingBalance , dailyDeposit);
    cout << "The Vault was funded in " << days << " days!"<< endl;
}