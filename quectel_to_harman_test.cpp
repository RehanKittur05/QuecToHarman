#include <gtest/gtest.h>
#include "quectel_xyz_mapper.h"


TEST(QuectelToHarmanTest, InvalidState) {
    QuectelToHarmanMapper  mapper;
    EXPECT_EQ(mapper.getHarmanState(static_cast<QuectelState>(999)), "Invalid State");
    // EXPECT_EQ(mapper.getXYZState(static_cast<QuectelState>(-1)), "Invalid State");
    // EXPECT_EQ(mapper.getXYZState(static_cast<QuectelState>(1000)), "Invalid State");
}
