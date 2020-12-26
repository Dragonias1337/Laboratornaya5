#include "header.hpp"

bool MathOtl(vector<unsigned> raiting, vector<string> subject)
{
  long int k = -1;
  for (unsigned int i = 0; i < subject.size(); i++)
  {
    if (subject[i] == "Math")
    {
      k = i;
    }
  }
  if (k != -1){
    if (raiting[k] == 5)
    {
      return true;
    }
  }
  return false;
}

vector<Student> VectorMathExcellent(const vector<Student>& input)
{
  int n = 0;
  vector<Student> Otl;
  for (const auto & i : input)
  {
    if (MathOtl(i.Ratings, i.Subjects))
    {
      n++;
      Otl.resize(n);
      Otl[n-1] = i;
    }
  }
  return Otl;
}