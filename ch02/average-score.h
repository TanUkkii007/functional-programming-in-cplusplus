#include <vector>
#include <numeric>

double average_score(const std::vector<int> &scores)
{
    return std::accumulate(
        scores.cbegin(), scores.cend(), 0
    ) / (double) scores.size();
}