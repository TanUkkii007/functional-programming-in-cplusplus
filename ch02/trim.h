#include <string>

bool is_not_space(char c)
{
    return c != ' ';
}

std::string trim_left(std::string s)
{
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), is_not_space));
    return s;
}

std::string trim_right(std::string s)
{
    // std::reverse_iterator(it).base() == it. Returns the underlying base iterator of reverse iterator. 
    s.erase(std::find_if(s.rbegin(), s.rend(), is_not_space).base(), s.end());
    return s;
}

std::string trim(std::string s)
{
    return trim_right(trim_left(s));
}