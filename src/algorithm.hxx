//
// Created by Nidhal DOGGA on 20/10/2020.
//

#ifndef DELTA_TWINS_ALGORITHM_HXX
#define DELTA_TWINS_ALGORITHM_HXX


#include <vector>
#include "temporal_graph.hxx"
#include "vertex.hxx"


namespace algorithm
{

  std::vector<vertex> find_delta_twins(const temporal_graph& graph);

};


#endif //DELTA_TWINS_ALGORITHM_HXX
