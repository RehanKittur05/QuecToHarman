#include <gtest/gtest.h>
#include "quectel_xyz_mapper.h"  

//Test for valid inputs
TEST(QuectelHarmanTest, ValidMappings) {
    EXPECT_EQ(MapQuectelStateToHarmanState(0), "Success_Done");
    EXPECT_EQ(MapQuectelStateToHarmanState(1), "Inactive_Update");
    EXPECT_EQ(MapQuectelStateToHarmanState(2), "Improper_Write");
    EXPECT_EQ(MapQuectelStateToHarmanState(3), "Sync_In_Progress");
    EXPECT_EQ(MapQuectelStateToHarmanState(4), "Performing_Backup");
    EXPECT_EQ(MapQuectelStateToHarmanState(5), "Cancel");
}

//Test for invalid inputs
TEST(QuectelHarmanTest, InvalidInputs) {
    EXPECT_EQ(MapQuectelStateToHarmanState(-1), std::nullopt);
    EXPECT_EQ(MapQuectelStateToHarmanState(6), std::nullopt);
    EXPECT_EQ(MapQuectelStateToHarmanState(100), std::nullopt);
}
//Test for immediate least value and highest value
TEST(QuectelHarmanTest, BoundaryValues) {
    EXPECT_EQ(MapQuectelStateToHarmanState(0), "Success_Done");  // Min valid
    EXPECT_EQ(MapQuectelStateToHarmanState(5), "Cancel");        // Max valid
    EXPECT_EQ(MapQuectelStateToHarmanState(-1), std::nullopt);   // Just before valid
    EXPECT_EQ(MapQuectelStateToHarmanState(6), std::nullopt);    // Just after valid
}
