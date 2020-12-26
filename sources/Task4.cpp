#include "header.hpp"
float srar(vector<unsigned> vec)
{
  float t = 0;
  for (float i : vec)
  {
    t += i;
  }
  t /= vec.size();
  return t;
}

size_t CountExcellent(const std::vector<Student>& input)
{
  int n = 0;
  for (const auto & i : input)
  {
      if (5.0 == srar(i.Ratings))
    {
        n++;
      }
  }
  return n;
}