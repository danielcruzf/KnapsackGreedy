
#ifndef UTIL
#define UTIL

#include <vector>
#include <algorithm>

class Item
{
public:
  unsigned long weight, valor;
  int id;

  Item();
  Item(int i, unsigned long wt, unsigned long val);
  void set(int i, unsigned long wt, unsigned long val);
  bool operator<(const Item &) const;
  bool operator>(const Item &i) const;

private:
  double ratio;
};

struct knapsackdata
{
  unsigned long n;
  unsigned long W;
  std::vector<Item> items;
};

struct result
{
  unsigned long tvalor;
  std::vector<int> items;
};

bool greaterfun(Item a, Item b);

#endif