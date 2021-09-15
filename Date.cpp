//
// Defines a Date class
// Author: Max Benson
// Date: 2021-08-07
//

#include "Date.h"

/**
 * Constructor
 * @param yr - the year
 * @param mon - the month, should be in range 1 to 12 inclusive
 * @param day - the day, range depends on year/month
 */
 Date::Date(unsigned yr, unsigned mon, unsigned day) {
     assert(1 <= mon && mon <= 12 && 1 <= day && day <= 31 );
    _yr = yr;
    _mon = mon;
    _day = day;
}

/**
 * Get Year
 * @return year
 */
unsigned Date::Year() const {
    return _yr;
}

/**
 * Get Month
 * @return month
 */
unsigned Date::Month() const {
    return _mon;
}

/**
 * Get Day
 * @return day
 */
unsigned Date::Day() const {
    return _day;
}
