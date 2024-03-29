#define APPROVALS_CATCH

#include "ApprovalTests.hpp"

#include "example1.h"
#include "example2.h"
#include "example3.h"


TEST_CASE ("hello_world") {
    std::stringstream to_approve;
    hello_world(to_approve);

    ApprovalTests::Approvals::verify(to_approve.str());
}

TEST_CASE ("Timers") {
    std::stringstream to_approve;
    timers(to_approve);

    ApprovalTests::Approvals::verify(to_approve.str());
}

TEST_CASE("IPv6") {
    std::stringstream to_approve;
    ipv6(to_approve);

    ApprovalTests::Approvals::verify(to_approve.str());
}