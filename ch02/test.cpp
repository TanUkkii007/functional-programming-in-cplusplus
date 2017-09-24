#include <vector>
#include "gtest/gtest.h"
#include "average-score.h"
#include "count-lines.h"
#include "trim.h"


TEST(Ch02Test, AverageScore) {
    const std::vector<int> xs = {1,2,3,4,5,6,7,8,9};
    EXPECT_EQ(average_score(xs), 5.0);
}

TEST(Ch02Test, CountLines) {
    const std::string s = "abcde\nfghijk\nlmnopq\nrstuvwxyz\n";
    EXPECT_EQ(count_lines(s), 4);
}

TEST(Ch02Test, CountLinesFoldRight) {
    const std::string s = "abcde\nfghijk\nlmnopq\nrstuvwxyz\n";
    EXPECT_EQ(count_lines_fold_right(s), 4);
}

TEST(Ch02Test, TrimLeft) {
    const std::string s = "   abc  ";
    EXPECT_EQ(trim_left(s), "abc  ");
}

TEST(Ch02Test, TrimRight) {
    const std::string s = "   abc  ";
    EXPECT_EQ(trim_right(s), "   abc");
}

TEST(Ch02Test, Trim) {
    const std::string s = "   abc  ";
    EXPECT_EQ(trim(s), "abc");
}