#include "util.hpp"

Item::Item()
{
  id = 0;
  weight = 0;
  valor = 0;
  ratio = 0;
};

Item::Item(int i, unsigned long wt, unsigned long val)
{
  id = i;
  weight = wt;
  valor = val;
  ratio = ((long double)val / (long double)wt);
};

void Item::set(int i, unsigned long wt, unsigned long val)
{
  id = i;
  weight = wt;
  valor = val;
  ratio = ((long double)valor / (long double)weight);
};

bool Item::operator<(const Item &i) const { return this->ratio < i.ratio; };

bool Item::operator>(const Item &i) const { return this->ratio > i.ratio; };