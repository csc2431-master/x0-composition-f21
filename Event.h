//
// Defines an Event Class illustrating "composition"
// Author: Max Benson
// Date: 2021-08-07
//

#ifndef EVENT_H
#define EVENT_H

#include "Date.h"
#include "Time.h"
using std::string;

class Event {
public:
    Event(const string& name, const Date& dateStart, const Time& timeStart, unsigned duration);

    string Name() const;
    Date StartDate() const;
    Time StartTime() const;
    unsigned Duration() const;

    friend ostream& operator<<(ostream& os, const Event& event) {
        os << event.Name() << " - Start: " << event.StartDate() << " " << event.StartTime() << " Duration: " << event.Duration() << " minutes";
        return os;
    }
private:
    string _name;
    Date _dateStart;
    Time _timeStart;
    unsigned _duration;
};


//Event(const string& name, const Date& dateStart, const Time& timeStart, unsigned duration)
//        : _name(name), _dateStart(dateStart), _timeStart(timeStart), _duration(duration) {
//}

#endif //EVENT_H
