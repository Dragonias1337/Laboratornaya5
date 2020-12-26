#include "header.hpp"


bool non(const vector<Group> &gr, const string &id)
{
  for (const auto & i : gr)
  {
    if (i.Id == id){
      return false;
    }
  }
  return true;
}

vector<Group> Groups(const vector<Student>& input)
{
   vector<Group> gr;
   int n = 0 ;
   for (const auto & i : input)
   {
     if (non(gr,i.GroupId))
     {
       n++;
       gr.resize(n);
       gr[n-1].Id = i.GroupId;
     }
   }

   for (auto &i : gr){
     for (const auto &j : input)
     {
       if (i.Id == j.GroupId)
       {
         i.Students.push_back(j);
       }
     }
   }

   return gr;
}
