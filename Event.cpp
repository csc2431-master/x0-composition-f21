//
// Defines an Event class
// Author: Max Benson
// Date: 2021-08-07
//

#include "Event.h"

/**
 * Constructor
 * @param name - name of event
 * @param dateStart - the start date of the event
 * @param timeStart - the start time of the event
 * @param duration - the number of minutes the event lasts
 */
Event::Event(const string& name, const Date& dateStart, const Time& timeStart, unsigned duration )
    : _name(name), _dateStart(dateStart), _timeStart(timeStart), _duration(duration) {
}

/**
 * Get Name
 * @return name
 */
 string Event::Name() const {
    return _name;
}

/**
 * Get Start Date
 * @return start date
 */
Date Event::StartDate() const {
    return _dateStart;
}

/**
 * Get Start Time
 * @return start time
 */
Time Event::StartTime() const {
    return _timeStart;
}

/**
 * Get Duration
 * @return duration in minutes
 */
unsigned Event::Duration() const {
    return _duration;
}

