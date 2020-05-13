
#include "roll_up_loop.h"

void hello_world(std::ostream &os) {
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

void idt(std::ostream &os) {
    os << "idt\n";
}

void p88n(std::ostream &os) {
    os << "p88n\n";
}

void time_quota(std::ostream &os) {
    os << "time_quota\n";
}

void zb12(std::ostream &os) {
    os << "zb12\n";
}

void dy9x(std::ostream &os) {
    os << "dy9x\n";
}

void monitoring_time(std::ostream &os) {
    os << "monitoring_time\n";
}

void timers(std::ostream &os) {
    void (*pointers_to_functions[6])(std::ostream &os);
    pointers_to_functions[0] = idt;
    pointers_to_functions[1] = p88n;
    pointers_to_functions[2] = time_quota;
    pointers_to_functions[3] = zb12;
    pointers_to_functions[4] = dy9x;
    pointers_to_functions[5] = monitoring_time;

    unsigned int smallest = INT_MAX;
    for (int i = 0; i < 6; ++i) {
        pointers_to_functions[i](os);
    }
}


