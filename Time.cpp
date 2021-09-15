//
// Defines a Time class
// Author: Max Benson
// Date: 2021-08-07
//

#include "Time.h"

/**
 * Constructor
 * @param hr - the hour, should be in range 0 to 23 inclusive
 * @param min - the minute, should be in range 0 to 59 inclusive
 */
 Time::Time(unsigned hr, unsigned min) {
     assert( hr < 24 && min < 60);
    _hr = hr;
    _min = min;
}

/**
 * Get Hour
 * @return hour
 */
unsigned Time::Hour() const {
    return _hr;
}

/**
 * Get Minute
 * @return minute
 */
unsigned Time::Minute() const {
    return _min;
}
