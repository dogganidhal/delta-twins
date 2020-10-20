//
// Created by Nidhal DOGGA on 20/10/2020.
//


#include <fstream>
#include "io_utils.hxx"
#include "temporal_graph.hxx"


temporal_graph *io::read_graph(const std::string& location)
{
  auto *graph = new temporal_graph();
  std::fstream file(location);
  long instant, departure_vertex, arrival_vertex;
  while (file >> instant >> departure_vertex >> arrival_vertex)
  {

  }
  return graph;
}