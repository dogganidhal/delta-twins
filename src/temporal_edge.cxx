//
// Created by Nidhal DOGGA on 20/10/2020.
//


#include <utility>
#include "temporal_edge.hxx"


temporal_edge::temporal_edge(const vertex &departure, const vertex &arrival, std::vector<long> instants)
  : departure(departure), arrival(arrival), instants(std::move(instants)) {}
