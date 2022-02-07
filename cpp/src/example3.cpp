
#include "example3.h"

void ipv6(std::ostream &os) {
    unsigned short data[] = {1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4};
    unsigned long ipv6[4] = {0,0,0,0};

    int index = 0;

    for (int i = 0; i < 4; ++i) {
        ipv6[i] = data[index + i*4];
    }

    os << ipv6[0] << ", " << ipv6[1] << ", "  << ipv6[2] << ", "  << ipv6[3] << "\n";
}


