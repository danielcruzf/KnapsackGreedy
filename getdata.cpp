#include "getdata.hpp"

knapsackdata getdata(std::string path)
{
  std::string line;
  std::ifstream myfile;
  std::vector<std::string> v; // splits
  knapsackdata data;
  myfile.open(path);

  if (myfile.is_open())
  {
    getline(myfile, line);
    boost::split(v, line, [](char c) { return c == ' '; });
    data.n = stoul(v[0]);
    data.W = stoul(v[1]);

    int i = 0;
    while (getline(myfile, line))
    {
      boost::split(v, line, [](char c) { return c == ' '; });
      data.items.push_back(Item(i, stoul(v[1]), stoul(v[0])));
      i++;
    }
    myfile.close();
  }
  else
  {
    std::cout << "Unable to open file: " << path << std::endl;
  }
  return data;
}