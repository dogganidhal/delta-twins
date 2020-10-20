//
// Created by Nidhal DOGGA on 20/10/2020.
//

#ifndef DELTA_TWINS_TEMPORAL_GRAPH_HXX
#define DELTA_TWINS_TEMPORAL_GRAPH_HXX

#include <vector>
#include "temporal_edge.hxx"

class temporal_graph
{
public:
  std::vector<temporal_edge> edges;
  std::vector<vertex> vertices;

  temporal_graph(const std::vector<temporal_edge> &edges, const std::vector<vertex> &vertices);
  temporal_graph();
};


#endif //DELTA_TWINS_TEMPORAL_GRAPH_HXX
