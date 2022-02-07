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
    idt(os);
    p88n(os);
    time_quota(os);
    zb12(os);
    dy9x(os);
    monitoring_time(os);
}


