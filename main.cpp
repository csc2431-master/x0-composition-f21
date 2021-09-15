//
// Test program for the Event class
// Author: Max Benson
// Date: 2021-08-07
//

#include <iostream>
using std::cout;
using std::endl;

#include "event.h"

int main() {
    Date startDate(2021, 9, 15);
    Time startTime(9, 0);
    Event classToday("Class Today", startDate, startTime, 80);

    cout << classToday << endl;

    return 0;
}
