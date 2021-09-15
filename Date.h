//
// Defines a Date class
// Author: Max Benson
// Date: 2021-08-07
//

#include <assert.h>
#include <iostream>
#include <iomanip>
using std::ostream;
using std::setfill;
using std::setw;

#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date(unsigned yr, unsigned mon, unsigned day);

    unsigned Year() const;
    unsigned Month() const;
    unsigned Day() const;

    friend ostream& operator<<(ostream& os, const Date& date) {
        os << date.Year() << '-' << setfill('0') << setw(2) << date.Month() << "-" <<setfill('0') << setw(2) << date.Day();
        return os;
    }
private:
    unsigned _yr;
    unsigned _mon;
    unsigned _day;
};

#endif //DATE_H
