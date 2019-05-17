#include "greedyknapsack.hpp"
//#include <iostream>
result greedyknapsack(knapsackdata data)
{
  result res;
  unsigned long w;

  //step 1: Sort sort for descending order items by valor/weight decreassing
  std::sort(data.items.begin(), data.items.end(), std::greater<Item>());

  w = 0;
  res.tvalor = 0;
  for (auto &&i : data.items)
  { //step 2: pick items in order until one does not fit and halt
    if ((w + i.weight) <= data.W)
    {
      w += i.weight;
      //std::cout << w << std::endl;
      res.tvalor += i.valor;
      res.items.push_back(i.id);
    }
    else if (res.tvalor < i.valor and data.W > i.weight)
    { //step 3: return maximum value of step 2 or item
      res.items.clear();
      res.items.push_back(i.id);
      res.tvalor = i.valor;
      //std::cout << "AQUI\n";
      break;
    }
  };
  //std::cout << "w = " << w << " W = " << data.W << std::endl;

  return res;
};