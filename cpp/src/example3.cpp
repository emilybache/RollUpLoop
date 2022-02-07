
#include "example3.h"

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


