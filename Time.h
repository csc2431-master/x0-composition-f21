//
// Defines a Time class
// Author: Max Benson
// Date: 2021-08-07
//
#include <assert.h>
#include <iostream>
#include <iomanip>
using std::ostream;
using std::setfill;
using std::setw;

#ifndef TIME_H
#define TIME_H

class Time {
public:
    Time(unsigned hr, unsigned min);

    unsigned Hour() const;
    unsigned Minute() const;

    friend ostream& operator<<(ostream& os, const Time& time) {
        os << time.Hour() << ':' << setfill('0') << setw(2) << time.Minute();
        return os;
    }

private:
    unsigned _hr;
    unsigned _min;
};

#endif //TIME_H


