#include "example2.h"

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

    for (auto & pointers_to_function : pointers_to_functions) {
        pointers_to_function(os);
    }
}


