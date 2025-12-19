#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double initialLoan, interestRate, yearlyPayment;
    
    // Input
    cout << "Enter initial loan: ";
    cin >> initialLoan;
    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;
    cout << "Enter amount you can pay per year: ";
    cin >> yearlyPayment;

    // Table header
    cout << setw(13) << left << "EndOfYear#"
         << setw(13) << left << "PrevBalance"
         << setw(13) << left << "Interest"
         << setw(13) << left << "Total"
         << setw(13) << left << "Payment"
         << setw(13) << left << "NewBalance"
         << endl;

    cout << fixed << setprecision(2);

    double prevBalance = initialLoan;
    int year = 1;

    while (prevBalance > 0) {
        double interest = prevBalance * interestRate / 100.0;
        double total = prevBalance + interest;
        double payment;

        // ปีสุดท้าย จ่ายเท่าที่ยอดเหลือ
        if (total < yearlyPayment)
            payment = total;
        else
            payment = yearlyPayment;

        double newBalance = total - payment;

        // Output each year
        cout << setw(13) << left << year
             << setw(13) << left << prevBalance
             << setw(13) << left << interest
             << setw(13) << left << total
             << setw(13) << left << payment
             << setw(13) << left << newBalance
             << endl;

        prevBalance = newBalance;
        year++;
    }

    return 0;
}
