//
// Created by Nidhal DOGGA on 20/10/2020.
//

#include "temporal_graph.hxx"


temporal_graph::temporal_graph(const std::vector<temporal_edge> &edges, const std::vector<vertex> &vertices) {
  this->edges = edges;
  this->vertices = vertices;
}

temporal_graph::temporal_graph() {
  this->edges = std::vector<temporal_edge>();
  this->vertices = std::vector<vertex>();
}
