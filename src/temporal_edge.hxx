//
// Created by Nidhal DOGGA on 20/10/2020.
//

#ifndef DELTA_TWINS_TEMPORAL_EDGE_HXX
#define DELTA_TWINS_TEMPORAL_EDGE_HXX


#include <vector>
#include "vertex.hxx"


struct temporal_edge
{

public:
  vertex departure;
  vertex arrival;
  std::vector<long> instants;

  temporal_edge(const vertex &departure, const vertex &arrival, std::vector<long> instants);

};


#endif //DELTA_TWINS_TEMPORAL_EDGE_HXX
