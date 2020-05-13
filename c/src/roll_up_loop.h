#ifndef ROLL_UP_LOOP_ROLL_UP_LOOP_H
#define ROLL_UP_LOOP_ROLL_UP_LOOP_H

#include <ostream>

static void hello_world(std::ostream &os)
{
    int i = 0;
    os << "hello " << i << "\n";
    i = 1;
    os << "hello " << i << "\n";
    i = 2;
    os << "hello " << i << "\n";
    i = 3;
    os << "hello " << i << "\n";
    i = 4;
    os << "hello " << i << "\n";
}

#endif //ROLL_UP_LOOP_ROLL_UP_LOOP_H
