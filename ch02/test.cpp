#include <vector>
#include "gtest/gtest.h"
#include "average-score.h"

TEST(Ch02Test, AverageScore) {
    const std::vector<int> xs = {1,2,3,4,5,6,7,8,9};
    EXPECT_EQ(average_score(xs), 5.0);
}