#include <iostream>
#include "getdata.hpp"
#include "util.hpp"
#include "greedyknapsack.hpp"

using namespace std;

int main(int argc, char **argv)
{
  auto data = getdata(argv[1]);
  auto res = greedyknapsack(data);

  unsigned long tv;

  string bits(data.n, '0');

  tv = 0;

  for (auto &&i : res.items)
  {
    bits[i] = '1';
    tv += data.items[i].valor;
  }
  cout << res.tvalor << ' ' << 0 << endl;
  for (auto &&i : bits)
  {
    cout << i << ' ';
  }
  cout << endl;
  //cout << tv;

  return 0;
}