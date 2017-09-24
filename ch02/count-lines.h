#ifndef CH02_COUNT_LINES
#define CH02_COUNT_LINES

#include <string>
#include <numeric>

int f(int previous_count, char c)
{
    return (c != '\n') ? previous_count : previous_count + 1;
}

int count_lines(const std::string &s)
{
    // string::cbegin and string::cend are const iterator
    return std::accumulate(
        s.cbegin(), s.cend(), 0, f
    );
}

int count_lines_fold_right(const std::string &s)
{
    return std::accumulate(
        s.rbegin(), s.rend(), 0, f
    );
}

#endif //CH02_COUNT_LINES