
#include "roll_up_loop.h"

void hello_world(std::ostream &os) {
    for (int i = 0; i < 5; ++i) {
        os << "hello " << i << "\n";
    }
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

    for (auto & pointers_to_function : pointers_to_functions) {
        pointers_to_function(os);
    }
}

void ipv6(std::ostream &os) {
    unsigned short data[] = {1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4};
    unsigned long ipv6[4] = {0,0,0,0};

    int index = 0;

    for (int i = 0; i < 4; ++i) {
           ipv6[i] = data[index + i*4];
    }

    os << ipv6[0] << ", " << ipv6[1] << ", "  << ipv6[2] << ", "  << ipv6[3] << "\n";
}


