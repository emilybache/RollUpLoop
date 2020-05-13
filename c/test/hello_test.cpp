#define APPROVALS_CATCH

#include "ApprovalTests.hpp"

extern "C"
{
#include "roll_up_loop.h"
}

TEST_CASE ("TimerExpiry", "hello_world") {
    std::stringstream to_approve;
    hello_world(to_approve);

    ApprovalTests::Approvals::verify(to_approve.str());
}