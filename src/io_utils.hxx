//
// Created by Nidhal DOGGA on 20/10/2020.
//

#ifndef DELTA_TWINS_IO_UTILS_HXX
#define DELTA_TWINS_IO_UTILS_HXX


#include <string>
#include "temporal_graph.hxx"


namespace io
{

  temporal_graph *read_graph(const std::string& location);

};


#endif //DELTA_TWINS_IO_UTILS_HXX
