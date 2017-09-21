#include <vector>
#include <numeric>
#include <functional>

double average_score(const std::vector<int> &scores)
{
    return std::accumulate(
        scores.cbegin(), scores.cend(), 0
    ) / (double) scores.size();
}

double scores_product(const std::vector<int> &scores)
{
    return std::accumulate(
            scores.cbegin(), scores.cend(),
            1,
            std::multiplies<int>()
    );
}