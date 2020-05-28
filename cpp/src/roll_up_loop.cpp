
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
    idt(os);
    p88n(os);
    time_quota(os);
    zb12(os);
    dy9x(os);
    monitoring_time(os);
}

void ipv6(std::ostream &os) {
    unsigned short data[] = {1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4};
    unsigned long ipv6[4] = {0,0,0,0};

    int index = 0;

    ipv6[0] = data[index];
    ipv6[1] = data[index + 4];
    ipv6[2] = data[index + 8];
    ipv6[3] = data[index + 12];

    os << ipv6[0] << ", " << ipv6[1] << ", "  << ipv6[2] << ", "  << ipv6[3] << "\n";
}


