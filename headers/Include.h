//
// Created by carlos on 05/03/19.
//

#ifndef MS_INCLUDE_H
#define MS_INCLUDE_H

#include <iostream>
#include <vector>
#include "string"
#include <iomanip>
#include <bits/ios_base.h>
#include <algorithm>
#include <fstream>
#include <gurobi_c++.h>
#include "boost/graph/adjacency_list.hpp"
#include "boost/graph/dijkstra_shortest_paths.hpp"
#include "boost/config.hpp"
#include "boost/graph/r_c_shortest_paths.hpp"
#include <lemon/gomory_hu.h>
#include <lemon/list_graph.h>

using namespace std;
using namespace boost;

typedef adjacency_list<vecS, vecS, directedS, property<vertex_index_t, int>, property<edge_weight_t, int>> BoostGraph;
typedef graph_traits<BoostGraph>::edge_descriptor EdgeDescriptor;
typedef graph_traits<BoostGraph>::vertex_descriptor VertexDescriptor;

#endif //MRP_INCLUDE_H
