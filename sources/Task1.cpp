#include "header.hpp"

void SortByName(vector<Student>&vec)
{
  for (unsigned int i = 0; i < vec.size(); i++)
  {
    unsigned int k = i;
    for (unsigned int j = i + 1; j < vec.size(); j++)
    {
      if (vec[j].Name < vec[k].Name)
      {
        k = j;
      }
    }
    Student q = vec[i];
    vec[i] = vec[k];
    vec[k] = q;
  }
}