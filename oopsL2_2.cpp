#include <iostream>
#include <iomanip>
using namespace std;

class DueDateCalculator {
private:
    static const int daysInMonth[12]; 

    static inline bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0);
    }

    static inline int getDaysInMonth(int month, int year) {
        if (month == 2) {
            return isLeapYear(year) ? 29 : 28;
        }
        return daysInMonth[month - 1];
    }

    static inline void incrementDate(int &day, int &month, int &year, int days) {
        while (days > 0) {
            int daysInCurrentMonth = getDaysInMonth(month, year);
            if (day + days <= daysInCurrentMonth) {
                day += days;
                days = 0;
            } else {
                days -= (daysInCurrentMonth - day + 1);
                day = 1;
                if (++month > 12) {
                    month = 1;
                    ++year;
                }
            }
        }
    }

public:
    static void calculateDueDate(int issueDay, int issueMonth, int issueYear, int daysAllowed = 14) {
        int dueDay = issueDay;
        int dueMonth = issueMonth;
        int dueYear = issueYear;

        incrementDate(dueDay, dueMonth, dueYear, daysAllowed);

        cout << "The due date is: " << setfill('0') << setw(2) << dueDay << "-"
             << setfill('0') << setw(2) << dueMonth << "-"
             << dueYear << endl;
    }
};
const int DueDateCalculator::daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int issueDay, issueMonth, issueYear, daysAllowed;

    cout << "Enter the issue date (DD MM YYYY): ";
    cin >> issueDay >> issueMonth >> issueYear;
    cout << "Enter the number of days the book is due: ";
    cin >> daysAllowed;

    DueDateCalculator::calculateDueDate(issueDay, issueMonth, issueYear, daysAllowed);

    return 0;
}