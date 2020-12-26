#include "header.hpp"
bool gb(const vector<unsigned>& vec)
{
  for (unsigned int i : vec)
  {
    if (i == 2)
    {
        return true;
      }
  }
  return false;
}

size_t CountTwoness(const std::vector<Student>& input)
{
  int n = 0;
  for (unsigned int i = 0; i < input.size(); i++)
  {
    if (gb(input[i].Ratings))
    {
      n++;
    }
  }
  return n;
}