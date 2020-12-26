
#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#endif // INCLUDE_HEADER_HPP_

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

struct Student
{
  string Name;
  string GroupId;
  vector<unsigned> Ratings;
  vector<string> Subjects;
};

struct Group
{
  string Id;
  vector<Student> Students;
};

void SortByName(vector<Student>&);
void SortByRating(vector<Student>&);
size_t CountTwoness(const vector<Student>&);
size_t CountExcellent(const vector<Student>&);
vector<Student> VectorMathExcellent(const vector<Student>&);
vector<string> GroupsId(const vector<Student>&);
vector<Group> Groups(const vector<Student>&);