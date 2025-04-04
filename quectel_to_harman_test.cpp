#include <gtest/gtest.h>
#include "quectel_xyz_mapper.h"
#include "quectel_to_harman.cpp"

TEST(QuectelToXYZTest, InvalidState) {
    QuectelToXYZMapper mapper;
    EXPECT_EQ(mapper.getXYZState(static_cast<QuectelState>(999)), "Invalid State");
    // EXPECT_EQ(mapper.getXYZState(static_cast<QuectelState>(-1)), "Invalid State");
    // EXPECT_EQ(mapper.getXYZState(static_cast<QuectelState>(1000)), "Invalid State");
}
