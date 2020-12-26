#include "header.hpp"

bool non(const vector<string> &gr, const string &id)
{
  for (auto & i : gr)
  {
    if (i == id)
    {
      return false;
    }
  }
  return true;
}

vector<string> GroupsId(const vector<Student>& input)
{
  vector<string> gr;
  int n = 0;
  for (const auto & i : input)
  {
      if (non(gr,i.GroupId))
    {
          n++;
          gr.resize(n);
         gr[n-1] = i.GroupId;
      }
  }
  return gr;
}