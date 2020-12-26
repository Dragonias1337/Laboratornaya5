#include "header.hpp"

float srar(vector<unsigned> &vec)
{
  float t = 0;
  for (float i : vec)
  {
    t += i;
  }
  t /= vec.size();
  return t;
}

void SortByRating(vector<Student>& input)
{
  for (unsigned int i = 0; i < input.size(); i++)
  {
    unsigned int k = i;
    float m1, m2;
    m1 = srar(input[k].Ratings);
    for (unsigned int j = i + 1; j < input.size(); j++)
    {

      m2 = srar(input[j].Ratings);
      if (m1 < m2)
      {
        m1 = m2;
        k = j;
      }
    }
    Student q = input[i];
    input[i] = input[k];
    input[k] = q;
  }
}