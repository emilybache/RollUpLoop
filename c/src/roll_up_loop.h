#ifndef ROLL_UP_LOOP_ROLL_UP_LOOP_H
#define ROLL_UP_LOOP_ROLL_UP_LOOP_H

#include <ostream>

static void hello_world(std::ostream &os)
{
    int n = 0;
    os << "hello " << n << "\n";
    n = 1;
    os << "hello " << n << "\n";
    n = 2;
    os << "hello " << n << "\n";
    n = 3;
    os << "hello " << n << "\n";
    n = 4;
    os << "hello " << n << "\n";
}

#endif //ROLL_UP_LOOP_ROLL_UP_LOOP_H
