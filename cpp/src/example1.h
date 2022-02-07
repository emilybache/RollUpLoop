

#ifndef ROLL_UP_LOOP_EXAMPLE1_H
#define ROLL_UP_LOOP_EXAMPLE1_H

#include <ostream>

static void hello_world(std::ostream &os) {
    for (int i = 0; i < 5; ++i) {
        os << "hello " << i << "\n";
    }
}

#endif //ROLL_UP_LOOP_EXAMPLE1_H
