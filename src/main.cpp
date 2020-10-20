#include <iostream>
#include "algorithm.hxx"
#include "io_utils.hxx"


int main() {
  std::cout << "Hello, World!" << std::endl;
  temporal_graph *graph = io::read_graph("../data/lesfurets/lesfurets.txt");
  auto delta_twins = algorithm::find_delta_twins(*graph);
  return 0;
}
